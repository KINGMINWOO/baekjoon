#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* part;
}Part;

int compare(const void* a, const void* b) {
    Part A = *(Part*)a;
    Part B = *(Part*)b;

    return strcmp(A.part, B.part);
}

int main()
{
    char ary1[1001];
    scanf("%s", ary1);
    int str_len = strlen(ary1);
    int n = (str_len * (str_len + 1)) / 2;
    
    Part* ary2;
    ary2 = (Part *)malloc(n * sizeof(Part));
    
    for (int i = 1, index = 0; i <= str_len; i++) {
        for (int j = 0; j < str_len - i + 1; j++) {
            ary2[index].part = (char *)calloc(i+1, sizeof(char));
            strncpy(ary2[index++].part, &ary1[j], i);
        }
    }
  
    qsort(ary2, n, sizeof(Part), compare); // ary2를 사전순으로 퀵정렬

    int count = 1;
    for (int i = 0; i < n - 1; i++) {
        if (strcmp(ary2[i].part, ary2[i + 1].part) != 0) {
            count += 1;
        }
    }
    printf("%d", count);
    
    return 0;
}

