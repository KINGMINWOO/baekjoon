#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X, cmd;

    deque<int> deque;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> cmd;
        switch (cmd)
        {
        case 1:
            cin >> X;
            deque.push_front(X);
            break;
        case 2:
            cin >> X;
            deque.push_back(X);
            break;
        case 3:
            if (!deque.empty()) {
                cout << deque.front() << '\n';
                deque.pop_front();
            }
            else cout << "-1\n";
            break;
        case 4:
            if (!deque.empty()) {
                cout << deque.back() << '\n';
                deque.pop_back();
            }
            else cout << "-1\n";
            break;
        case 5:
            cout << deque.size() << '\n';
            break;
        case 6:
            cout << deque.empty() << '\n';
            break;
        case 7:
            if (!deque.empty()) cout << deque.front() << '\n';
            else cout << "-1\n";
            break;
        case 8:
            if (!deque.empty()) cout << deque.back() << '\n';
            else cout << "-1\n";
            break;
        }
    }

    return 0;
}
