#include <stdio.h>
#include <string.h>

int squar(int a, int b);

int main()

{
    
    int N;
    scanf("%d", &N);
    int result = squar((squar(2, N) + 1), 2);
    printf("%d", result);


    return 0;
}

int squar(int a, int b) {
    int a1 = a;
    for (int i = 1; i < b; i++) {
        a1 = a1 * a;
    }
    
    return a1;
}