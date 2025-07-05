#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, cmd, X;
    stack<int> s;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd;
        switch (cmd) {
        case 1:
            cin >> X;
            s.push(X);
            break;
        case 2:
            if (s.empty()) cout << -1 << '\n';
            else {
                cout << s.top() << '\n';
                s.pop();
            }
            break;
        case 3:
            cout << s.size() << '\n';
            break;
        case 4:
            cout << (s.empty() ? 1 : 0) << '\n';
            break;
        case 5:
            if (s.empty()) cout << -1 << '\n';
            else cout << s.top() << '\n';
            break;
        }
    }
    return 0;
}