#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, cntRec, res;
	cin >> T;
	string s;

	for (int i = 0; i < T; i++) {
		cntRec = 0, res = 1;
		cin >> s;
		int l = 0, r = s.length() - 1;
		while (1) {
			cntRec++;
			if (l >= r) {
				break;
			}
			else if (s[l] == s[r]) {
				l++;
				r--;
			}
			else {
				res = 0;
				break;
			}
		}

		cout << res << ' ' << cntRec << '\n';
	}
}