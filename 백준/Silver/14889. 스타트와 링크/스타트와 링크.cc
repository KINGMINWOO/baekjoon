#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int diffMin = 100000;

void team(vector<vector<int>>& ab, vector<int>& start, vector<bool>& link, int N) {
    if (start.size() == N / 2) {
        int sumStart = 0, sumLink = 0, diff;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (link[i] == false && link[j] == false) {
                    sumStart += ab[i][j];
                }
                else if (link[i] == true && link[j] == true) {
                    sumLink += ab[i][j];
                }
            }
        }
        diff = abs(sumStart - sumLink);
        if (diff <= diffMin) diffMin = diff;
    }

    for (int k = 0; k < N; k++) {
        if (link[k] && start.back() < k) {
            start.push_back(k);
            link[k] = false;
            team(ab, start, link, N);
            start.pop_back();
            link[k] = true;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<vector<int>> ab(N + 1, vector<int>(N + 1, 0));
    vector<int> start;
    start.push_back(0);
    vector<bool> link(N, true);
    link[0] = false;
    


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> ab[i][j];
        }
    }

    team(ab, start, link, N);

    cout << diffMin;
}