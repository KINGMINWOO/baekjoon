#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    queue<int> circle;
    queue<int> y;

    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        circle.push(i);
    }

    while (circle.size() != 0) {
        for (int j = 1; j < K; j++) {
            circle.push(circle.front());
            circle.pop();
        }
        y.push(circle.front());
        circle.pop();
    }

    cout << '<';
    for (int k = 0; k < N; k++) {
        if (k != N - 1) {
            cout << y.front() << ", ";
            y.pop();
        }
        else {
            cout << y.front();
            y.pop();
        }
    }
    cout << '>';

    return 0;
}