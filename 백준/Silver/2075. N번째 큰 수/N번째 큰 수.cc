#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x;
	cin >> N;

	priority_queue<int, vector<int>, greater<int>> minHeap;

	for (int i = 0; i < N; i++) {
		cin >> x;
		minHeap.push(x);
	}

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> x;
			if (x > minHeap.top()) {
				minHeap.pop();
				minHeap.push(x);
			}
		}
	}

	cout << minHeap.top();
}