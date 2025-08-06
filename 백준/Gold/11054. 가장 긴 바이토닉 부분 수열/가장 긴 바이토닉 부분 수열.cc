#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, w;
    cin >> n;

    vector<int> v;
    vector<int> LIS;
    vector<int> RELIS(n);
    vector<int> RES(n);

    for (int i = 0; i < n; i++) {
        cin >> w;
        v.push_back(w);
    }

    for (int i = 0; i < n; i++) {
        LIS.push_back(1);
        for (int j = 0; j < i; j++) {
            if (v[j] < v[i]) {
                LIS[i] = max(LIS[i], LIS[j] + 1);
            }
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        RELIS[i] = 1;
        for (int j = n - 1; j >= i; j--) {
            if (v[j] < v[i]) {
                RELIS[i] = max(RELIS[i], RELIS[j] + 1);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        RES[i] = LIS[i] + RELIS[i];
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        if (res <= RES[i])
            res = RES[i];
    }

    cout << res - 1;
}