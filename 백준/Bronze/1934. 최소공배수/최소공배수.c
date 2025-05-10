#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;
    int b;
}Number;

int main()
{
    int T;
    scanf("%d", &T);
    Number *ary;
    int* lowest_common_multiple;
    lowest_common_multiple = (int*)malloc(T * sizeof(int));
    ary = (Number*)malloc(T * sizeof(Number));
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &ary[i].a, &ary[i].b);
        int greatest_common_divisor;
        if (ary[i].a > ary[i].b) {
            int mod;
            int bigger = ary[i].a;
            int smaller = ary[i].b;
            while (1) {
                mod = bigger % smaller;
                if (mod != 0) {
                    bigger = smaller;
                    smaller = mod;
                    continue;
                }
                else {
                    greatest_common_divisor = smaller;
                    lowest_common_multiple[i] = ary[i].a * ary[i].b / greatest_common_divisor;
                    break;
                }
           }
        }
        else if(ary[i].a < ary[i].b) {
            int mod;
            int bigger = ary[i].b;
            int smaller = ary[i].a;
            while (1) {
                mod = bigger % smaller;
                if (mod != 0) {
                    bigger = smaller;
                    smaller = mod;
                    continue;
                }
                else {
                    greatest_common_divisor = smaller;
                    lowest_common_multiple[i] = ary[i].a * ary[i].b / greatest_common_divisor;
                    break;
                }
            }
        }
        else {
            lowest_common_multiple[i] = ary[i].a;
        }
    }

    for (int i = 0; i < T; i++) {
        printf("%d\n", lowest_common_multiple[i]);
    }

    free(lowest_common_multiple);
    free(ary);

    return 0;
}