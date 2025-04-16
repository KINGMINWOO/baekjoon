#include <stdio.h>

int main()

{
    int A[9][9];
    int max = 0;
    int i_max, j_max;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &A[i][j]);
            if (A[i][j] >= max) {
                max = A[i][j];
                i_max = i + 1, j_max = j + 1;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d", i_max, j_max);
    
    
    return 0;
}