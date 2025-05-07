#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//typedef struct {
//    char word[51];
//}ary;

int compare(const void* a, const void* b);

int main()
{
    
    int N;
    scanf("%d", &N); // 단어의 갯수 입력
    char ary[20000][51] = { 0 };

    for (int i = 0; i < N; i++) {
        scanf("%s", ary[i]);
    }

    qsort(ary, N, sizeof(ary[0]), compare);

    printf("%s\n", ary[0]);
    for (int i = 1; i < N ; i++) {
        if (strcmp(ary[i], ary[i - 1]) != 0)
            printf("%s\n", ary[i]); 
    }
    
    
    return 0;
}


int compare(const void* a, const void* b) {
       
    if (strlen((const char *)a) > strlen((const char *)b))
        return 1;
    else if (strlen((const char*)a) < strlen((const char*)b))
        return -1;
    else {
        return strcmp((const char *)a, (const char *)b);
    }
}