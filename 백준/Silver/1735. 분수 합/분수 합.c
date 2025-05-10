#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int A, B, C, D;
    int mom, son;
    int gcd;
    scanf("%d %d", &A, &B);
    scanf("%d %d", &C, &D);
    mom = B * D;
    son = A * D + C * B;
    int bigger, smaller, mod;
    if (mom > son) {
        bigger = mom;
        smaller = son;
        while (1) {
            mod = bigger % smaller;
            if (mod != 0) {
                bigger = smaller;
                smaller = mod;
                continue;
            }
            else {
                gcd = smaller;
                mom = mom / gcd;
                son = son / gcd;
                break;
            }
        }
    }
    else if (mom < son) {
        bigger = son;
        smaller = mom;
        while (1) {
            mod = bigger % smaller;
            if (mod != 0) {
                bigger = smaller;
                smaller = mod;
                continue;
            }
            else {
                gcd = smaller;
                mom = mom / gcd;
                son = son / gcd;
                break;
            }
        }
    }
    else {
        mom = 1;
        son = 1;
    }
    printf("%d %d", son, mom);
    return 0;
}