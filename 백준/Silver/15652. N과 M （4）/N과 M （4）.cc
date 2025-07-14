#include <iostream>
#include <vector>
using namespace std;

void BackTracking(vector<int>& s, vector<int>& result, int N, int M) {
	if (result.size() == M) {
		for (int i = 0; i < M; i++) {
			cout << result[i];
			if (i == M - 1) {
				cout << '\n';
			}
			else {
				cout << ' ';
			}
		}
		return;
	}

	for (int i = 0; i < N; i++) {
		if (result.empty() || result.back() <= s[i]) {
			result.push_back(s[i]);
			BackTracking(s, result, N, M);
			result.pop_back();
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> s;
	vector<int> result;

	for (int i = 0; i < N; i++) {
		s.push_back(i + 1);
	}

	BackTracking(s, result, N, M);
	
	return 0;
}