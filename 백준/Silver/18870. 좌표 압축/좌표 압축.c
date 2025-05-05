#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int num;
    int order;
    int val;
}Num;

int compare_num(const void* a, const void* b) {
    Num A = *(Num*)a;
    Num B = *(Num*)b;
    if (A.num > B.num)
        return 1;
    else if (A.num < B.num)
        return -1;
    else
        return 0;
}

int compare_order(const void* a, const void* b) {
    Num A = *(Num*)a;
    Num B = *(Num*)b;
    if (A.order > B.order)
        return 1;
    else if (A.order < B.order)
        return -1;
    else
        return 0;
}

int main()
{

    int N;
    scanf("%d", &N);
    Num ary[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &ary[i].num);
        ary[i].order = i;
    }
    
    qsort(ary, N, sizeof(Num), compare_num);

    ary[0].val = 0;
    int count = 0;
    for (int i = 1; i < N; i++) {
        if (ary[i].num == ary[i - 1].num) {
            ary[i].val = ary[i - 1].val;
        }
        else {
            count += 1;
            ary[i].val = count;
        }
    }

    qsort(ary, N, sizeof(Num), compare_order);

    
    for (int i = 0; i < N; i++) {
        printf("%d ", ary[i].val);
    }

    return 0;
}