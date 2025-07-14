#include <iostream>
#include <vector>
using namespace std;

void BackTracking(vector<int>& s, vector<bool>& used, vector<int>& result, int N, int M) {
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
		if (used[i] == false) {
			used[i] = true;
			result.push_back(s[i]);
			BackTracking(s, used, result, N, M);
			result.pop_back();
			used[i] = false;
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
	vector<bool> used(N, false);
	vector<int> result;

	for (int i = 0; i < N; i++) {
		s.push_back(i + 1);
	}

	BackTracking(s, used, result, N, M);
	
	return 0;
}