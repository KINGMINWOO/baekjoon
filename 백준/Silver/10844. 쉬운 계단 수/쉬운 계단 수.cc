#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    long long array[101][10] = { 0 };
    
    for (int i = 1; i < 101; i++) {
        for (int j = 0; j <= 9; j++) {
            if (i == 1) {
                if (j == 0) {
                    array[i][j] = 0;
                }
                else {
                    array[i][j] = 1;
                }
            }
            else {
                if (j == 0) {
                    array[i][j] = array[i - 1][j + 1];
                }
                else if (j == 9) {
                    array[i][j] = array[i - 1][j - 1];
                }
                else {
                    array[i][j] = array[i - 1][j - 1] + array[i - 1][j + 1];
                }
            }
            array[i][j] %= 1000000000;
        }
    }

    long long sum = 0;
    for (int i = 0; i < 10; i++) {
        sum = (sum + array[N][i]) % 1000000000;
    }

    cout << sum;
}