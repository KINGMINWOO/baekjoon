#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[6];
    char now[6];
}Member;

int compare(const void* a, const void* b) {
    Member A = *(Member*)a;
    Member B = *(Member*)b;
    return -(strcmp(A.name, B.name));
}

int main()
{
    int n;
    scanf("%d", &n);
    Member mem[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s", &mem[i].name, &mem[i].now);
    }

    qsort(mem, n, sizeof(Member), compare);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(mem[i].name, mem[i + 1].name) == 0) {
            count += 1;
        }
        else if ((i == n - 1 || strcmp(mem[i].name, mem[i + 1].name) != 0)){
            if (count % 2 == 0) {
                printf("%s\n", mem[i].name);
                count = 0;
            }
            else count = 0;
        }
    }

    return 0;
}