#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long A, B;
    long long lcm, gcd;
    scanf("%lld %lld", &A, &B);
    
    long long bigger, smaller, mod;
    if (A > B) {
        bigger = A;
        smaller = B;
        while (1) {
            mod = bigger % smaller;
            if (mod != 0) {
                bigger = smaller;
                smaller = mod;
                continue;
            }
            else {
                gcd = smaller;
                lcm = A * B / gcd;
                break;
            }
        }
    }
    else if (A < B) {
        bigger = B;
        smaller = A;
        while (1) {
            mod = bigger % smaller;
            if (mod != 0) {
                bigger = smaller;
                smaller = mod;
                continue;
            }
            else {
                gcd = smaller;
                lcm = A * B / gcd;
                break;
            }
        }
    }
    else {
        lcm = A;
    }

    printf("%lld", lcm);

    return 0;
}