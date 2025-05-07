#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return strcmp(*(char**)a, *(char**)b);
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    char* S[N];
    for (int i = 0; i < N; i++) {
        S[i] = (char*)malloc(501);
    }
    char* C[M];
    for (int i = 0; i < M; i++) {
        C[i] = (char*)malloc(501);
    }

    for (int i = 0; i < N; i++) {
        scanf("%s", S[i]);
    }
    for (int i = 0; i < M; i++) {
        scanf("%s", C[i]);
    }
    qsort(S, N, sizeof(S[0]), compare);

    int count = 0;
    for (int i = 0; i < M; i++) {
        int max_index = N - 1;
        int min_index = 0;
        while (1) {
            if (strcmp(S[(max_index + min_index) / 2], C[i]) > 0) {
                max_index = (max_index + min_index) / 2 - 1;
            }
            else if (strcmp(S[(max_index + min_index) / 2], C[i]) < 0) {
                min_index = (max_index + min_index) / 2 + 1;
            }
            else {
                count += 1;
                break;
            }
            if (min_index > max_index) break;
        }
    }
    printf("%d", count);

    for (int i = 0; i < N; i++) {
        free(S[i]);
    }
    for (int i = 0; i < M; i++) {
        free(C[i]);
    }

    return 0;
}