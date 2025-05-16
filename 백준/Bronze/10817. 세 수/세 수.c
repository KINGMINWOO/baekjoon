#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    if (*((int*)a) > *((int*)b)) return 1;
    else return -1;
}

int main()
{
    int ary[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &ary[i]);
    }
    qsort(ary, 3, sizeof(int), compare);
    printf("%d", ary[1]);


    return 0;
}