#include <stdio.h>
#include <string.h>

int main()

{
    
    int N, M;
    int count = 0;
    int sum;
    int per_sum = 0;
    int a[10000];
    int h = 0;
    scanf("%d", &N);
    scanf("%d", &M);
    for (int i = N; i <= M; i++) {
        sum = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i + 1) {
            a[h] = i;
            h++;
            per_sum += i;
        }
    }
    if (per_sum == 0) {
        printf("-1");
    }
    else {
        printf("%d\n", per_sum);
        printf("%d", a[0]);
    }

    return 0;
}