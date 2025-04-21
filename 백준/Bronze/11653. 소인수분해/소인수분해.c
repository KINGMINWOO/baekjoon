#include <stdio.h>

int main()

{

    int N;
    scanf("%d", &N);
    int m, j;
    int a = 2;

    for (int i = 2; i <= N; i++) {
        while (N % i == 0) {
            printf("%d\n", i);
            N = N / i;
        }
    }

   

    return 0;
}