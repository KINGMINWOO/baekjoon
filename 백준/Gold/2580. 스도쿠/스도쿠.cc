#include <iostream>
#include <vector>
using namespace std;

//bool isOkBlock(vector<vector<int>>& sudoku, int y, int x, int k)

bool isOk(vector<vector<int>>& sudoku, int y, int x, int k) {
    for (int i = 0; i < 9; i++) {
        if (sudoku[y][i] == k || sudoku[i][x] == k)
            return false;
    }

    int startRow = (y / 3) * 3;
    int startCol = (x / 3) * 3;
    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            if (sudoku[i][j] == k)
                return false;
        }
    }

    return true;
}

void play(vector<vector<int>>& sudoku, vector<int>& x, vector<int>& y, int p) {
    if (p == x.size()) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << sudoku[i][j] << ' ';
            }
            cout << '\n';
        }
        exit(0);
    }
    
    for (int k = 1; k <= 9; k++) {
        if (isOk(sudoku, y[p], x[p], k)) {
            sudoku[y[p]][x[p]] = k;
            play(sudoku, x, y, p + 1);
            sudoku[y[p]][x[p]] = 0;
        }
    }
    
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> sudoku(9, vector<int>(9)); // 9 * 9 스도쿠
    vector<int> x;
    vector<int> y;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> sudoku[i][j];
            if (sudoku[i][j] == 0) {
                x.push_back(j);
                y.push_back(i);
            }
        }
    }

    play(sudoku, x, y, 0);

    return 0;
}