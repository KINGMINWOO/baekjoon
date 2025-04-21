#include <stdio.h>
#include <string.h>

int main()

{
    
    int N, n;
    int count = 0;
    int sum;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &n);
        sum = 0;
        for (int j = 1; j <= n; j++) {
            if (n % j == 0) {
                sum += j;
            }
        }
        if (sum == (n + 1)) count += 1;
    }
    printf("%d", count);


    return 0;
}