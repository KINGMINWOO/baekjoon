#include <stdio.h>
#include <string.h>



int main()

{
    
    int N, B;
    int m, n;
    int a[80];
    scanf("%d %d", &N, &B);
    int i = 0;
    while (1) {
        m = N / B;
        n = N % B;
        a[i] = n;
        i++;
        if (m == 0) {
            break;
        }
        N = m;
    }
    for (int j = i - 1; j >= 0 ; j--) {
        if (a[j] >= 10) {
            printf("%c", a[j] + 55);
        }
        else {
            printf("%d", a[j]);
        }
        
    }

    return 0;
}