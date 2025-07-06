#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> structure_type(N);
    for (int i = 0; i < N; i++) {
        cin >> structure_type[i];
    }

    deque<int> final_queue;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        // 큐(0)인 자료구조의 초기 원소만 뒤에서부터 deque에 추가
        if (structure_type[i] == 0) {
            final_queue.push_front(num);
        }
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
        int new_element;
        cin >> new_element;

        // 새로운 원소를 뒤에 추가
        final_queue.push_back(new_element);

        // 맨 앞의 원소를 빼서 출력
        cout << final_queue.front() << " ";
        final_queue.pop_front();
    }

    cout << '\n';

    return 0;
}
