#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, weight, value;
    cin >> N >> K;

    vector<int> w, v;

    for (int i = 0; i < N; i++){
        cin >> weight >> value;
        w.push_back(weight);
        v.push_back(value);
        // if(weight <= K){ // 버틸 수 있는 무게보다 크면 필요 없음
        // }
    }
    
    vector<int> maxValueWhenK(K + 1, 0); // 버틸 수 있는 무게가 K일 때의 최대 가치합

    for (int i = 0; i < N; i++){
        for (int j = K; j >= 0; j--){
            if(j - w[i] >= 0)
                maxValueWhenK[j] = max(maxValueWhenK[j], maxValueWhenK[j - w[i]] + v[i]);
        }
    }

    cout << maxValueWhenK[K];
}