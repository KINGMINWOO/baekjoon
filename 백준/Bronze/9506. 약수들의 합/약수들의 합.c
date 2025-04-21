#include <stdio.h>
#include <string.h>

int main()

{
    int n; 
    int sum;
    int a[500];
    int j;
    while (1) {
        sum = 0;
        j = 0;
        scanf("%d", &n);
        if (n == -1) break;
        for (int i = 1; i <= n - 1; i++) {
            if (n % i == 0) {
                a[j] = i;
                j++;
                sum += i;
            }
        }
        if (n == sum) {
            printf("%d =", n);
            for (int h = 0; h < j - 1; h++) {
                printf(" %d +", a[h]);
            }
            printf(" %d\n", a[j - 1]);
        }
        else {
            printf("%d is NOT perfect.\n", n);
        }
    }


    return 0;
}