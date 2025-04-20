#include <stdio.h>

int main()

{
    int N, K;
    int a[800];
    int d;
    int j = 0;
    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++) {
        d = N % i;
        if (d == 0) {
            a[j] = i;
            j++;
        }
    }
    if (K > j) {
        printf("0");
    }
    else {
        printf("%d", a[K - 1]);
    }
    
    
    return 0;
}