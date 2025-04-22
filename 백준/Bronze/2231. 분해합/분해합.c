#include <stdio.h>

int main()

{
    
    int N;
    scanf("%d", &N);
    int start = N / 2;
    int m;
    int a, b, c, d, e, f, g;
    while (1) {
        if (start == N) {
            printf("0");
            break;
        }
        a = start / 1000000;
        b = start % 1000000 / 100000;
        c = start % 1000000 % 100000 / 10000;
        d = start % 1000000 % 100000 % 10000 / 1000;
        e = start % 1000000 % 100000 % 10000 % 1000 / 100;
        f = start % 1000000 % 100000 % 10000 % 1000 % 100 / 10;
        g = start % 1000000 % 100000 % 10000 % 1000 % 100 % 10;

        m = start + a + b + c + d + e + f + g;
        if (m == N) {
            printf("%d", start);
            break;
        }
        start++;
    }

    return 0;
}