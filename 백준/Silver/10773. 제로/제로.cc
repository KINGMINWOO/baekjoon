#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    int K, num, sum = 0;
    cin >> K;

    for (int i = 0; i < K; i++) {
        cin >> num;
        if (num) {
            s.push(num);
            sum += s.top();
        }
        else {
            sum -= s.top();
            s.pop();
        }
    }
    cout << sum;
    
    return 0;
}