#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void starSquare(vector<vector<char>>& star, int t, int b, int l, int r) {
	int size = b - t;
	if (size < 3) return;

	int s = size / 3;
	// 중앙 영역 공백 처리
	for (int i = t + s; i < t + 2 * s; i++) {
		for (int j = l + s; j < l + 2 * s; j++) {
			star[i][j] = ' ';
		}
	}
	// 9개 영역에 대해 재귀 호출
	for (int dx = 0; dx < 3; dx++) {
		for (int dy = 0; dy < 3; dy++) {
			if (dx == 1 && dy == 1) continue; // 중앙은 이미 공백 처리
			starSquare(star, t + dx * s, t + (dx + 1) * s, l + dy * s, l + (dy + 1) * s);
		}
	}
}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	
	vector<vector<char>> star(N, vector<char>(N, '*'));

	starSquare(star, 0, N, 0, N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << star[i][j];
		}
		cout << '\n';
	}

	return 0;
}