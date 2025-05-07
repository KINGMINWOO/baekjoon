#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[101];
    short age;
}member;

int compare(const void* a, const void* b);

int main()
{
    
    int N;
    scanf("%d", &N); // 단어의 갯수 입력
    member A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %s", &A[i].age, A[i].name);
    }

    qsort(A, N, sizeof(member), compare);

    
    for (int i = 0; i < N ; i++) {
        printf("%d %s\n", A[i].age, A[i].name);
    }
        
    return 0;
}


int compare(const void* a, const void* b) {
       
    member* A1 = (member*)a;
    member* A2 = (member*)b;

    if (A1->age > A2->age)
        return 1;
    else if (A1->age == A2->age)
        return 0;
    else
        return -1;
}