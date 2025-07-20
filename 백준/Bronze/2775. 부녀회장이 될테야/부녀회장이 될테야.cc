#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T, k, n;
	cin >> T;

	vector<vector<int>> apt(15, vector<int>(14, 0)); // 15개 층 각 층마다 14호 까지

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 14; j++) {
			if (i == 0) {
				apt[i][j] = j + 1;
			}
			else {
				for (int k = 0; k <= j; k++) {
					apt[i][j] += apt[i - 1][k];
				}
			}
		}
	}

	for (int i = 0; i < T; i++) {
		cin >> k;
		cin >> n;

		cout << apt[k][n - 1] << '\n';
	}
}