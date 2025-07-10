#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void canto(vector<char>& s, int l, int r) {
	if (r - l < 2) return; // 길이가 1보다 작으면 더 이상 나눌 수 없음

	int len = (r - l + 1) / 3;
	for (int i = l + len; i < l + 2 * len; i++) {
		s[i] = ' ';
	}

	canto(s, l, l + len - 1);           // 왼쪽
	canto(s, l + 2 * len, r);           // 오른쪽
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	while (cin >> N) {
		int len = pow(3, N);
		vector<char> s(len, '-');

		canto(s, 0, len - 1);

		for (char c : s)
			cout << c;
		cout << '\n';
	}

	return 0;
}