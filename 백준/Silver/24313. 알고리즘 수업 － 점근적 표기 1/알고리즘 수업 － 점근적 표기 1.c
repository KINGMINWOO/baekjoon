#include <stdio.h>

int main()

{
    
    int a1, a0, c, n0;
    int p, q;
    scanf("%d %d", &a1, &a0);
    scanf("%d", &c);
    scanf("%d", &n0);
    while (1) {
        p = a1 * n0 + a0;
        q = n0 * c;
        if (p > q) {
            printf("0");
            break;
        }
        n0++;
        if (n0 == 10000) {
            printf("1");
            break;
        }
    }

    return 0;
}