#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int A = *(int*)a;
    int B = *(int*)b;

    if (A > B) return 1;
    else if (A < B) return -1;
    else return 0;
}

int main()
{
    int N, M;

    scanf("%d", &N);
    int ary1[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &ary1[i]);
    }
    scanf("%d", &M);
    int ary2[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &ary2[i]);
    }

    qsort(ary1, N, sizeof(int), compare);

    for (int i = 0; i < M; i++) {
        int max_index = N - 1;
        int min_index = 0;
        while (1) {
            if (ary1[(max_index + min_index) / 2] < ary2[i]) {
                min_index = (max_index + min_index) / 2 + 1;
            }
            else if (ary1[(max_index + min_index) / 2] > ary2[i]) {
                max_index = (max_index + min_index) / 2 - 1;
            }
            else {
                printf("1 ");
                break;
            }
            if (max_index < min_index) {
                printf("0 ");
                break;
            }
        }
    }

    return 0;
}