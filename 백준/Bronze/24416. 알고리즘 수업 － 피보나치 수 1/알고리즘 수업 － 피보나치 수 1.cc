#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int fibCnt = 0;
int fibonacciCnt = 0;

int fib(int N) {
    if (N == 1 || N == 2) {
        fibCnt++;
        return 1;
    }
    else {
        return fib(N - 1) + fib(N - 2);
    }
}

int fibonacci(int N) {
    int f[40] = { 0 };
    f[0] = f[1] = 1;
    for (int i = 2; i < N; i++) {
        fibonacciCnt++;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[N - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int f = fib(N);
    int F = fibonacci(N);
    
    cout << fibCnt << ' ' << fibonacciCnt;

    return 0;
}