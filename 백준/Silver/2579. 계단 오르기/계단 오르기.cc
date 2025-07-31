#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b) {
    if (a >= b)
        return a;
    else
        return b;
}

void stair(vector<int>& v, vector<int>& maxValue, int n) {
    for (int i = 0; i < n; i++) {
        if (i > 2) {
            maxValue.push_back(max(maxValue[i - 2] + v[i], maxValue[i - 3] + v[i - 1] + v[i]));
        }
        else if (i == 2) {
            maxValue.push_back(max(v[i] + v[i - 1], v[i] + v[i - 2]));
        }
        else if (i == 1) {
            maxValue.push_back(v[i] + v[i - 1]);
        }
        else if (i == 0) {
            maxValue.push_back(v[i]);
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, score;
    cin >> n;

    vector<int> v;
    vector<int> maxValue;
    
    for (int i = 0; i < n; i++) {
        cin >> score;
        v.push_back(score);
    }

    stair(v, maxValue, n);

    cout << maxValue[n - 1];
}