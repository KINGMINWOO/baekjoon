#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    stack<int> check;
    int K;
    string ps;
    cin >> K;

    for (int i = 0; i < K; i++) {
        int k;
        cin >> ps;
        for (int j = 0; j < ps.length(); j++) {
            s.push(ps[j]);
        }
        if (s.top() == '(') {
            cout << "NO\n";
        }
        else {
            for (k = 0; k < ps.length(); k++) {
                if (s.top() == ')') {
                    check.push(1);
                    s.pop();
                }
                else if (s.top() == '(') {
                    if (check.empty()) {
                        break;
                    }
                    else {
                        s.pop();
                        check.pop();
                    }
                }
            }
            if (check.empty() && k == ps.length()) cout << "YES\n";
            else cout << "NO\n";
        }
        while (!s.empty()) s.pop();
        while (!check.empty()) check.pop();
    }
    
    return 0;
}
