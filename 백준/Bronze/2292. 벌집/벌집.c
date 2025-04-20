#include <stdio.h>
#include <string.h>

int mul(int a, int b);

int main()

{
    int N;
    scanf("%d", &N);

    int m;
    int i = 0;

    while (1) {
        m = N - mul(6, i);
        i++;
        if (m <= 0) break;
        N = m;
    }
    printf("%d", i);

    return 0;
}

int mul(int a, int b) {
    int result;
    if (b == 0) result = 1;
    else result = a * b;
    return result;
}
