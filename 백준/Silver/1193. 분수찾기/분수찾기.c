#include <stdio.h>

int main()

{
    int X;
    scanf("%d", &X);
    int a = 1;
    int b;
    int i = 0;
    int m;
    while (1) {
        m = X - a;
        if (m >= 0) {
            b = m;
            i++;
            X = m;
        }
        else {
            break;
        }
        a++;
    }
    if (i % 2 == 0) {
        if (b > 0) {
            printf("%d/%d", i - b + 2, b);
        }
        else {
            printf("%d/%d", i, b + 1);
        }
    }
    else {
        if (b > 0) {
            printf("%d/%d", b, i - b + 2);
        }
        else {
            printf("%d/%d", b + 1, i);
        }
    }

    
    return 0;
}
