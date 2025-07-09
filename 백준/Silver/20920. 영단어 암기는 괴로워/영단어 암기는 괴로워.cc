#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string> words;
map<string, int> wordBook;

bool More(string a, string b) {
    if (wordBook[a] > wordBook[b])
        return true;
    else
        return false;
}

bool Long(string a, string b) {
    if (a.length() > b.length())
        return true;
    else
        return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    string w;
   
    for (int i = 0; i < N; i++) {
        cin >> w;
        if (w.length() >= M) {
            if (wordBook.find(w) == wordBook.end()) {// 단어가 없으면
                wordBook[w] = 1;
                words.push_back(w);
            }
            else { // 단어가 있으면
                wordBook[w] += 1;
            }
        }
    }

    stable_sort(words.begin(), words.end());
    stable_sort(words.begin(), words.end(), Long);
    stable_sort(words.begin(), words.end(), More);

    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << '\n';
    }

    return 0;
}
