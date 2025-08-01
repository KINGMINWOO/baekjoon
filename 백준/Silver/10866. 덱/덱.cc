#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int N, X;
	cin >> N;
	string cmd;
	deque<int> s;

	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd == "push_back") {
			cin >> X;
			s.push_back(X);
		}
		else if (cmd == "push_front") {
			cin >> X;
			s.push_front(X);
		}
		else if (cmd == "pop_back") {
			if (!s.empty()) {
				cout << s.back() << '\n';
				s.pop_back();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "pop_front") {
			if (!s.empty()) {
				cout << s.front() << '\n';
				s.pop_front();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "size") {
			cout << s.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << s.empty() << '\n';
		}
		else if (cmd == "front") {
			if (!s.empty()) {
				cout << s.front() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "back") {
			if (!s.empty()) {
				cout << s.back() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}
}