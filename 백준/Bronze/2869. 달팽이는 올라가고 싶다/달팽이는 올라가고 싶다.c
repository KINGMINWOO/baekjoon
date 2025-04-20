#include <stdio.h>

int main()

{
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    int h = (V - A) % (A - B);
    int d;
    if (h == 0) {
        d = (V - A) / (A - B) + 1;
    }
    else {
        d = (V - A) / (A - B) + 2;
    }
    
    printf("%d", d);

    
    return 0;
}