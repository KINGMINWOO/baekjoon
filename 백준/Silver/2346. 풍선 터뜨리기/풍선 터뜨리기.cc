#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> circle;
    deque<int> paper;
    int N, num;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        paper.push_back(num);
    }
    for (int i = 1; i <= N; i++) {
        circle.push_back(i);
    }

    while (1) {
        int cursor = paper.front();
        cout << circle.front() << ' ';
        circle.pop_front();
        paper.pop_front();
        if (circle.empty()) break;

        if (cursor > 0) {
            for (int j = 1; j < cursor; j++) {
                circle.push_back(circle.front());
                paper.push_back(paper.front());
                circle.pop_front();
                paper.pop_front();
            }
        }
        else {
            for (int j = -1; j >= cursor; j--) {
                circle.push_front(circle.back());
                paper.push_front(paper.back());
                circle.pop_back();
                paper.pop_back();
            }
        }
    }

    return 0;
}