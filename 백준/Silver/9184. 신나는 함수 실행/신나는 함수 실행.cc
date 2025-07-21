#include <iostream>
#include <vector>
#include <map>
#include <array>
using namespace std;

map<array<int, 3>, int> memo;

int w(int a, int b, int c) {
    if (memo.count({a, b, c}))
        return memo[{a, b, c}];

    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }
    else if (a > 20 || b > 20 || c > 20) {
        memo[{a, b, c}] = w(20, 20, 20);
        return memo[{a, b, c}];
    }
    else if (a < b && b < c) {
        memo[{a, b, c}] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        return memo[{a, b, c}];
    }
    else {
        memo[{a, b, c}] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
        return memo[{a, b, c}];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c;

    while (1) {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)  break;

        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
    }
}   