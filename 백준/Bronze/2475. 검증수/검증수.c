#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int ary[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ary[i]);
        sum += ary[i] * ary[i];
    }
    printf("%d", sum % 10);

    return 0;
}