#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000001

int main()
{
    
    int T;
    scanf("%d", &T);
    int* n;
    n = (int*)calloc(sizeof(int), MAX);
    n[0] = 1;
    n[1] = 1;
    int* m;
    m = (int*)calloc(sizeof(int), 78498); // 백만보다 작은 소수의 갯수: 78498
    int h = 0;
    for (int i = 2; i < MAX; i++) {
        if (n[i] == 0) {
            m[h++] = i;
            int j = i;
            while ((i + j) < MAX) {
                n[i + j] = 1;
                j += i;
            }
        }        
    }
    int count, k, a;
    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        count = 0, k = 0;
        while (1) {
            a = m[k];
            if (n[N - a] != 0) {
                k++;
            }
            else {
                count += 1;
                k++;
            }
            if (m[k] > N / 2) break;
        }
        printf("%d\n", count);
    }

    free(n);
    free(m);
    return 0;
}