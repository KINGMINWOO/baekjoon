#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	cin.ignore();
	string str, token;
	stack<string> st;
	for (int i = 0; i < N; i++) {
		getline(cin, str, '\n');
		istringstream iss(str);
		while (iss >> token) {
			st.push(token);
		}
		cout << "Case #" << i + 1 << ": ";
		while (!st.empty()) {
			cout << st.top() << ' ';
			st.pop();
		}
		cout << '\n';
	}
}