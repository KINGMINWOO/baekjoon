#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, x;
    cin >> N;

    stack<pair<int, int>> s;  // (높이, 인덱스)
    vector<int> result;

    for (int i = 0; i < N; ++i) {
        cin >> x;

        while (!s.empty() && s.top().first <= x) {
            s.pop();
        }

        if (s.empty()) result.push_back(0);
        else result.push_back(s.top().second + 1);  // 1-based index

        s.push({ x, i });
    }

    for (int r : result) {
        cout << r << " ";
    }
}
