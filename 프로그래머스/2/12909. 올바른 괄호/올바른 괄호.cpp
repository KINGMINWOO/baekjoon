#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string ps)
{
    stack<int> s;
    stack<int> check;
    int k;

    for (int j = 0; j < ps.length(); j++) {
        s.push(ps[j]);
    }
    if (s.top() == '(') {
        return false;
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
        if (check.empty() && k == ps.length())
            return true;
        else
            return false;
    }
    while (!s.empty()) s.pop();
    while (!check.empty()) check.pop();
}