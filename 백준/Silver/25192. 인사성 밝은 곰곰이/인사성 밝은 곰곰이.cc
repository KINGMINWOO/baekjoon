#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<string> v;
	string user;

	int N, cnt = 0;
	cin >> N;


	for (int i = 0; i < N; i++) {
		cin >> user;
		if (user != "ENTER") {
			if (v.insert(user).second)
				cnt++;
		}
		else {
			v.clear();
		}
	}

	cout << cnt;
}