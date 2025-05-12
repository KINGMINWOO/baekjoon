#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    int T;
    scanf("%d", &T);
    long long* ary;
    ary = (long long*)calloc(sizeof(long long), T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &ary[i]);
        long long a = ary[i];
        //printf("%lf", b);
        if (a < 4) {
            ary[i] = (a == 3) ? 3 : 2;
        }
        else {
            int j=2;
            int b;
            do {
            b = (int)sqrt(a);
                if (a % j == 0)
                {
                    a++;
                    j = 2;
                    continue;
                }
                j++;
            } while (j <= b);
                ary[i] = a;
        }
    }

    for (int i = 0; i < T; i++) {
        printf("%lld\n", ary[i]);
    }

    free(ary);
    return 0;
}