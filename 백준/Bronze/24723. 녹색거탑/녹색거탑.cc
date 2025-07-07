#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, res = 1;
    cin >> N;

    for (int i = 0; i < N; i++) {
        res *= 2;
    }
    
    cout << res;
    
    return 0;
}