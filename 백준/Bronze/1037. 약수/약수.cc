#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> n;

	int N, A, R;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		n.push_back(a);
	}

	sort(n.begin(), n.end());

	R = n[0] * n[N - 1];

	cout << R;
}