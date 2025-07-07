#include <iostream>
using namespace std;

long long combination(int N, int M) {
    long long com = 1;
    for (int i = 1; i <= N; i++) {
        com *= M--;
        com /= i;
    }

    return com;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, M; 
    long long res;
  
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N >> M;
        res = combination(N, M);
        cout << res << '\n';
    }

    return 0;
}
