#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<vector<int>> v(n, vector<int>(n));

    cin >> v[0][0];

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> v[i][j];
            if (j == 0) {
                v[i][j] += v[i - 1][j];
            }
            else if (j == i) {
                v[i][j] += v[i - 1][j - 1];
            }
            else {
                (v[i - 1][j - 1] >= v[i - 1][j]) ? (v[i][j] += v[i - 1][j - 1]) : (v[i][j] += v[i - 1][j]);
            }
        }
    }

    int maxValue = 0;
    for (int j = 0; j < n; j++) {
        if (v[n - 1][j] >= maxValue)
            maxValue = v[n - 1][j];
    }

    cout << maxValue;
}