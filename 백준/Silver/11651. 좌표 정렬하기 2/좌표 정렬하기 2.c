#include <stdio.h>
#include <stdlib.h>


struct A1
{
    int x;
    int y;
};

int compare(const void* a, const void* b);

int main()
{

    int N;
    scanf("%d", &N);
    struct A1 ary[100000];
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &ary[i].x, &ary[i].y);
    }

    qsort(ary, N, sizeof(struct A1), compare);
    
    for (int i = 0; i < N; i++) {
        printf("%d %d\n", ary[i].x, ary[i].y);
    }

    return 0;
}


int compare(const void* a, const void* b) {
    struct A1 A = *(struct A1 *)a;
    struct A1 B = *(struct A1 *)b;

    if (A.y > B.y) {
        return 1;
    }
    else if (A.y == B.y) {
        if (A.x > B.x) {
            return 1;
        }
        else if (A.x < B.x)
            return -1;
        return 0;
    }
    else return -1;
}