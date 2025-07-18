#include <iostream>
#include <vector>
using namespace std;

int minValue = 1000000001;
int maxValue = -1000000001;

void MinMax(vector<int>& v, vector<int>& Operator, int VIndex, int res, int N) {
    if (VIndex == N - 1) {
        if (res <= minValue) {
            minValue = res;
        }
        if (res >= maxValue) {
            maxValue = res;
        }
        return;
    }
    
    for (int i = 0; i < 4; i++) {
        if (Operator[i] != 0) { // 계산할 연산자가 남아 있을 때
            int temp = 0;
            Operator[i] -= 1;
            if (i == 0) { // (+)
                res = v[VIndex] + v[VIndex + 1];
                temp = v[VIndex + 1];
                v[VIndex + 1] = res;
                MinMax(v, Operator, VIndex + 1, res, N);
                v[VIndex + 1] = temp;
            }
            else if (i == 1) { // (-)
                res = v[VIndex] - v[VIndex + 1];
                temp = v[VIndex + 1];
                v[VIndex + 1] = res;
                MinMax(v, Operator, VIndex + 1, res, N);
                v[VIndex + 1] = temp;
            }
            else if (i == 2) { // (x)
                res = v[VIndex] * v[VIndex + 1];
                temp = v[VIndex + 1];
                v[VIndex + 1] = res;
                MinMax(v, Operator, VIndex + 1, res, N);
                v[VIndex + 1] = temp;
            }
            else { // (/)
                res = v[VIndex] / v[VIndex + 1];
                temp = v[VIndex + 1];
                v[VIndex + 1] = res;
                MinMax(v, Operator, VIndex + 1, res, N);
                v[VIndex + 1] = temp;
            }
            Operator[i] += 1;
        }
    }
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, op;
    cin >> N;
    vector<int> v;
    vector<int> Operator;

    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i < 4; i++) {
        cin >> op;
        Operator.push_back(op);
    }

    MinMax(v, Operator, 0, 0, N);

    cout << maxValue << '\n' << minValue;

    return 0;
}