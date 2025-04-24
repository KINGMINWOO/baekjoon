#include <stdio.h>

int main()

{
    
    int N;
    scanf("%d", &N);

    int sum = 0, sum_min = 5000;
    for (int i = 0; i < 2000; i++) {
        for (int j = 0; j < 1001; j++) {
           if ((3 * i + 5 * j) == N) {
               sum = i + j;
               if (sum < sum_min) sum_min = sum;
           }
        }
    }

    if (sum == 0) printf("-1");
    else printf("%d", sum_min);
          
    return 0;
}