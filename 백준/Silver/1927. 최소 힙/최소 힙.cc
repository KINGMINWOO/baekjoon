#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x;
	cin >> N;

	priority_queue<int, vector<int>, greater<int>> less;

	for (int i = 0; i < N; i++) {
		cin >> x;

		if (x != 0) {
			less.push(x);
		}
		else {
			if (less.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << less.top() << '\n';
				less.pop();
			}
		}
	}
}