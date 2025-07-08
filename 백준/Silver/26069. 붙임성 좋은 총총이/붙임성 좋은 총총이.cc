#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<string> normal, rainbow;
	rainbow.insert("ChongChong");
	string name1, name2;

	int N;
	cin >> N;


	for (int i = 0; i < N; i++) {
		cin >> name1 >> name2;
		
		if (rainbow.count(name1) || rainbow.count(name2)) {
			rainbow.insert(name1);
			rainbow.insert(name2);
		}
	}

	cout << rainbow.size();
}