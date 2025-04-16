#include <stdio.h>

int main()

{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N - 1; j++) {
            printf(" ");
        }
        for (int k = 1 ; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < N; i++) {
        for (int j = N; j < N + i  ; j++) {
            printf(" ");
        }
        for (int k = 1; k < 2 * N - 2 * i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}