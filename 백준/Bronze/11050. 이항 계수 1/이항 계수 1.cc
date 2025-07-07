#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, res;
    cin >> N >> K;

    res = factorial(N) / (factorial(K) * factorial(N - K));

    cout << res;

    return 0;
}