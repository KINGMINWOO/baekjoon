#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int M, N;
    scanf("%d", &M);
    scanf("%d", &N);
    int* ary;
    ary = (int*)calloc(sizeof(int), N);
    ary[0] = 1;
    for (int i = 0; i < N; i++) {
        if (ary[i] == 0) {
            int j = i + 1;
            while ((i + j) <= N - 1) {
                ary[i + j] = 1;
                j += i + 1;
            }
        }
    }
 
    for (int i = M; i <= N; i++) {
        if (ary[i - 1] == 0) {
            printf("%d\n", i);
        }
    }
    
    free(ary);
    return 0;
}