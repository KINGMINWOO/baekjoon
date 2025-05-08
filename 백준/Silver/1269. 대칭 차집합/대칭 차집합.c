#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int wonso;
}Zip;

int compare(const void* a, const void* b) {
    Zip A = *(Zip*)a;
    Zip B = *(Zip*)b;

    if (A.wonso > B.wonso) return 1;
    else if (A.wonso < B.wonso) return -1;
    else return 0;
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    Zip A[N];
    Zip B[M];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i].wonso);
    }
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i].wonso);
    }
    qsort(A, N, sizeof(Zip), compare);
    qsort(B, M, sizeof(Zip), compare);
    int count = 0;
    for (int i = 0; i < M; i++) {
        int max_index = N - 1;
        int min_index = 0;
        while (min_index <= max_index) {
            if (B[i].wonso > A[(max_index + min_index) / 2].wonso) {
                min_index = (max_index + min_index) / 2 + 1;
            }
            else if (B[i].wonso < A[(max_index + min_index) / 2].wonso) {
                max_index = (max_index + min_index) / 2 - 1;
            }
            else {
                count += 1;
                break;
            }
        }
    }
    printf("%d", (N - count) + (M - count));

    return 0;
}