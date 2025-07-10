#include <iostream>
#include <string>
#include <vector>
using namespace std;

int cnt, K, n = -1;

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }

    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= right) temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); ++k) {
        arr[left + k] = temp[k];
        cnt++;
        if (cnt == K) {
            n = temp[k];
        }
    }
}

void merge_sort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//string s;
    int N, num;

	cin >> N >> K;
    vector<int> s;

	for (int i = 0; i < N; i++) {
		cin >> num;
        s.push_back(num);
	}
	cnt = 0;
	merge_sort(s, 0, s.size() - 1);

    cout << n;
}