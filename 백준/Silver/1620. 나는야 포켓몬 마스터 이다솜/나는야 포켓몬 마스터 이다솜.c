#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[21];
    int num;
}Pokemon;

typedef struct {
    char name[21];
    int num;
}Wiki1;

int compare(const void* a, const void* b) {
    Wiki1 A = *(Wiki1*)a;
    Wiki1 B = *(Wiki1*)b;

    return strcmp(A.name, B.name);
}

int squre(int, int);

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    Pokemon wiki[N];
    Wiki1 wiki1[N];
    char poke[M][21];

    for (int i = 0; i < N; i++) {
        scanf("%s", &wiki[i].name);
        strcpy(&wiki1[i].name, &wiki[i].name);
        wiki[i].num = i + 1;
        wiki1[i].num = i + 1;
    }

    qsort(wiki1, N, sizeof(Wiki1), compare);

    for (int i = 0; i < M; i++) {
        scanf("%s", poke[i]);
    }
    
    for (int i = 0; i < M; i++) {
        if (*poke[i] > 57) {
            int max_index = N - 1;
            int min_index = 0;
            while (min_index <= max_index) {
                if (strcmp(poke[i], &wiki1[(max_index + min_index) / 2].name) > 0) {
                    min_index = (max_index + min_index) / 2 + 1;
                }
                else if (strcmp(poke[i], &wiki1[(max_index + min_index) / 2].name) < 0) {
                    max_index = (max_index + min_index) / 2 - 1;
                }
                else {
                    printf("%d\n", wiki1[(max_index + min_index) / 2].num);
                    break;
                }
            }
        }
        else {
            int str_len = strlen(poke[i]);
            int A = 0;
            for (int j = 0; j < str_len; j++) {
                A = A + (poke[i][str_len - 1 - j] - 48) * squar(10, j);
            }

            int max_index = N - 1;
            int min_index = 0;
            while (min_index <= max_index) {
                if (A > wiki[(max_index + min_index) / 2].num) {
                    min_index = (max_index + min_index) / 2 + 1;
                }
                else if (A < wiki[(max_index + min_index) / 2].num) {
                    max_index = (max_index + min_index) / 2 - 1;
                }
                else {
                    printf("%s\n", wiki[(max_index + min_index) / 2].name);
                    break;
                }
            }
        }
    }

    return 0;
}
int squar(int a, int b) {
    int a1 = 1;
    for (int i = 0; i < b; i++) {
        a1 = a1 * a;
    }
    return a1;
}