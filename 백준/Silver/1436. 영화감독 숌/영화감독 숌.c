#include <stdio.h>

int main()

{
    
    int N;
    scanf("%d", &N);
    int ary[7];
    int a, b, c, d, e, f, g;
    int count = 0;
    for (int i = 666; i < 10000000; i++) {
        a = i / 1000000;
        ary[0] = a;
        b = i % 1000000 / 100000;
        ary[1] = b;
        c = i % 1000000 % 100000 / 10000;
        ary[2] = c;
        d = i % 1000000 % 100000 % 10000 / 1000;
        ary[3] = d;
        e = i % 1000000 % 100000 % 10000 % 1000 / 100;
        ary[4] = e;
        f = i % 1000000 % 100000 % 10000 % 1000 % 100 / 10;
        ary[5] = f;
        g = i % 1000000 % 100000 % 10000 % 1000 % 100 % 10;
        ary[6] = g;
        for (int j = 6; j >= 2 ; j--) {
            if (ary[j] == 6 && ary[j - 1] == 6 && ary[j - 2] == 6) {
                count += 1;
                if (count == N) {
                    printf("%d", i);
                    return 0;
                }
                break;
            }
        }

    }
    
    
    return 0;
}