#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;

	cin >> N >> M;

	string address, password;
	map<string, string> m;

	for (int i = 0; i < N; i++) {
		cin >> address >> password;
		m[address] = password;
	}
	
	vector<string> v;
	for (int i = 0; i < M; i++) {
		cin >> address;
		v.push_back(address);
	}

	for (int i = 0; i < M; i++) {
		cout << m[v[i]] << '\n';
	}
}