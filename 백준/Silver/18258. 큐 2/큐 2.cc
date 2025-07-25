#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X;
    queue<int> q;
    string cmd;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> X;
            q.push(X);
        }
        else if (cmd == "pop") {
            if (q.empty())  cout << "-1\n";
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (cmd == "size") {
            cout << q.size() << '\n';
        }
        else if (cmd == "empty") {
            cout << q.empty() << '\n';
        }
        else if (cmd == "front") {
            if (q.empty())  cout << "-1\n";
            else cout << q.front() << '\n';
        }
        else if (cmd == "back") {
            if (q.empty())  cout << "-1\n";
            else cout << q.back() << '\n';
        }
    }
    
    return 0;
}
