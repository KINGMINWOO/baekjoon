#include <iostream>
#include <vector>
using namespace std;

int tile(int N) {
    vector<int> t(N);
    t[0] = 1;
    if (N > 1) {
        t[1] = 2;
        
        for (int i = 2; i < N; i++) {
            t[i] = (t[i - 1] + t[i - 2]) % 15746;
        }
    }

    return t[N - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    cout << tile(N);
}