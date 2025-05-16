#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int* ary;
    ary = (int*)calloc(sizeof(int), 10001);
    ary[0] = 1;
    for (int i = 1; i <= 10000; i++) {
        if (ary[i] == 0) {
            int j = 0;
            int a = i;
            while (1) {
                j = a + a / 1000 + a % 1000 / 100 + a % 1000 % 100 / 10 + a % 1000 % 100 % 10;
                if (j > 10000) break;
                ary[j] = 1;
                a = j;
            }   
        }
    }
    for (int i = 0; i <= 10000; i++) {
        if (ary[i] == 0) printf("%d\n", i);
    }
    
    free(ary);

    return 0;
}