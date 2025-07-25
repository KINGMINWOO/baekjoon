#include <iostream>
#include <vector>
using namespace std;

int MIN;

void RGB(vector<vector<int>>& v, int N, int i) {
    if (i == N) {
        MIN = v[i - 1][0];
        for (int j = 1; j < 3; j++) {
            if (v[i - 1][j] < MIN)
                MIN = v[i - 1][j];
        }
        return;
    }

    if (i != 0) {
        for (int j = 0; j < 3; j++) {
            int minCost = 10000001;
            for (int k = 0; k < 3; k++) {
                if (k == j)
                    continue;
                else {
                    if (v[i - 1][k] < minCost)
                        minCost = v[i - 1][k];
                }
            }
            v[i][j] += minCost;            
        }        
    }
    RGB(v, N, i + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<vector<int>> v(N, vector<int>(3));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[i][j];
        }
    }
    
    RGB(v, N, 0);

    cout << MIN;
}