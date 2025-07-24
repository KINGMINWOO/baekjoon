#include <iostream>
#include <vector>
using namespace std;

long long padovan(int N) {
    long long pa[100];

    pa[0] = pa[1] = pa[2] = 1;

    for (int i = 3; i < N; i++) {
        pa[i] = pa[i - 2] + pa[i - 3];
    }
    return pa[N - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;

        cout << padovan(N) << '\n';
    }
}