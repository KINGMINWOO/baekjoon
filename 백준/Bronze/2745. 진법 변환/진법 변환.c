#include <stdio.h>
#include <string.h>

int squar(int, int);

int main()

{
    char N[100];
    int B;
    int dec = 0;
    scanf("%s %d", N, &B);
    //printf("%c %d\n", N[0], N[0]);
    int n = strlen(N);
    //printf("%d\n", n);
    //printf("4^2 = %d\n", squar(2, 0));
    for (int i = 0; i < n; i++) {
        if (N[i] < 'A') {
            dec += ((N[i] - 48) * (squar(B, n - 1 - i))); 
        }
        else if (N[i] >= 'A') {
            dec += ((N[i] - 55) * (squar(B, n - 1 - i)));
        }
        
    }
    printf("%d", dec);
    return 0;
}

int squar(int a, int b) {
    int a1 = a;
    if (b == 0) a1 = 1;
    for (int i = 0; i < b - 1; i++) {
        a1 = a1 * a;
    }

    int result = a1;

    return result;
}