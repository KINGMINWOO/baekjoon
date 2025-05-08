#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[21];
    int check;
}Person;

int compare(const void* a, const void* b) {
    Person A = *(Person*)a;
    Person B = *(Person*)b;

    return strcmp(A.name, B.name);
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    Person hear[N];
    Person look[M];
    for (int i = 0; i < N; i++) {
        scanf("%s", &hear[i].name);
    }
    for (int i = 0; i < M; i++) {
        scanf("%s", &look[i].name);
    }

    qsort(hear, N, sizeof(Person), compare);
    qsort(look, M, sizeof(Person), compare);

    int count = 0;
    for (int i = 0; i < M; i++) {
        int max_index = N - 1;
        int min_index = 0;
        while (min_index <= max_index) {
            if (strcmp(&look[i].name, &hear[(max_index + min_index) / 2].name) > 0) {
                min_index = (max_index + min_index) / 2 + 1;
            }
            else if (strcmp(&look[i].name, &hear[(max_index + min_index) / 2].name) < 0) {
                max_index = (max_index + min_index) / 2 - 1;
            }
            else {
                count += 1;
                look[i].check = 1;
                break;
            }
        }
    }
    printf("%d\n", count);
    for (int i = 0; i < M; i++) {
        if (look[i].check == 1) {
            printf("%s\n", &look[i].name);
        }
    }

    return 0;
}