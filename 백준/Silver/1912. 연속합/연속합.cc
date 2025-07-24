#include <iostream>
#include <vector>
using namespace std;

int maximumSubarray(vector<int>& v, int n) {
    int sum = 0, max = -1001;

    for (int i = 0; i < n; i++) {
        sum += v[i];
        if (sum > max)
            max = sum;
        if (sum < 0)
            sum = 0;
    }

    return max;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, N;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> N;
        v.push_back(N);
    }
    
    cout << maximumSubarray(v, n);
}