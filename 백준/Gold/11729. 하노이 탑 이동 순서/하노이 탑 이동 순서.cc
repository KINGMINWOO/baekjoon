#include <iostream>
#include <cmath>
using namespace std;

void move(int N, char start, char to) {
	cout << start << ' ' << to << '\n';
}

void hanoi(int N, char start, char to, char via) {
	if (N == 1) {
		move(N, start, to);
	}
	else {
		hanoi(N - 1, start, via, to);
		move(N, start, to);
		hanoi(N - 1, via, to, start);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	cout << (int)pow(2, N) - 1 << '\n';
	hanoi(N, '1', '3', '2');

	return 0;
}