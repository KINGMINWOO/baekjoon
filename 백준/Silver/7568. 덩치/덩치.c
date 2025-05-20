#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x; // 몸무게
    int y; // 키
    int z; // 덩치 등수
}Mess;


int main()
{
    int N;
    scanf("%d", &N);
    Mess* person;
    person = (Mess*)malloc(sizeof(Mess) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &person[i].x, &person[i].y);
    }
    
    int count;
    for (int i = 0; i < N; i++) {
        count = 1;
        for (int j = 0; j < N; j++) {
            if (person[j].x > person[i].x && person[j].y > person[i].y) count += 1;
        }
        person[i].z = count;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", person[i].z);
    }

    free(person);
    return 0;
}