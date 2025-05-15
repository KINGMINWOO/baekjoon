#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    int i = 1;
    int count = 0;
    while ((i * i) <= N) {
        if (N >= (i * i)) {
            count += 1;
            i += 1;
        }
    }
    printf("%d", count);
    
    return 0;
}