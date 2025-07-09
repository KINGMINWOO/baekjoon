#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Number {
public:
	int num;
	int frequency;
	Number() { this->frequency = 0; }
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	vector<int> maxIndex;
	int avg, mid, fre, ran;
	double avgOrg;
	Number ary[8001];
	

	int N, n, sum = 0, maxFre = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		ary[n + 4000].num = n;
		ary[n + 4000].frequency += 1;
		if (maxFre <= ary[n + 4000].frequency)
			maxFre = ary[n + 4000].frequency;
		sum += n;
		v.push_back(n);
	}

	for (int i = 0; i < 8001; i++) {
		if (ary[i].frequency == maxFre) {
			maxIndex.push_back(ary[i].num);
		}
	}

	sort(v.begin(), v.end());
	sort(maxIndex.begin(), maxIndex.end());

	// 산술평균
	avgOrg = (double)sum / (double)N;
	avg = round(avgOrg);
	// 중앙값
	mid = v[(N - 1) / 2];
	// 최빈값
	if (maxIndex.size() == 1)
		fre = maxIndex[0];
	else
		fre = maxIndex[1];
	// 범위
	ran = v[N - 1] - v[0];

	// 출력
	cout << avg << '\n';
	cout << mid << '\n';
	cout << fre << '\n';
	cout << ran << '\n';
}