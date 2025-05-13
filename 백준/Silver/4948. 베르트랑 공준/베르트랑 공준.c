#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define MAX 246912

int main()
{
    int* ary;
    ary = (int*)calloc(sizeof(int), MAX);
    ary[0] = 1;
    for (int i = 1; i < MAX; i++) {
        if (ary[i] == 0) {
            int j = i + 1;
            while ((i + j) < MAX) {
                ary[i + j] = 1;
                j += i + 1;
            }
        }
    }
    int n, count;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        else {
            count = 0;
            for (int i = n + 1; i <= 2 * n; i++) {
                if (ary[i - 1] == 0) {
                    count++;
                }
            }
            printf("%d\n", count);
        }
        
    }
    
    free(ary);
    return 0;
}