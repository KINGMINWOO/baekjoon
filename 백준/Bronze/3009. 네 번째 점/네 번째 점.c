#include <stdio.h>

int main()

{

    int a, b, c, d, e, f;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    scanf("%d %d", &e, &f);

    if (a == c) {
        printf("%d ", e);
    }
    else if (a == e) {
        printf("%d ", c);
    }
    else {
        printf("%d ", a);
    }

    if (b == d) {
        printf("%d", f);
    }
    else if (b == f) {
        printf("%d", d);
    }
    else {
        printf("%d", b);
    }
    

    return 0;
}

