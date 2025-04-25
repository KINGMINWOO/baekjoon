#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int ary[10000] = { 0, };
    int num;
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        ary[num - 1] += 1;
    }

    for (int i = 0; i < 10000; i++) {
        if (ary[i] != 0) {
            for (int j = 0; j < ary[i]; j++) {
                printf("%d\n", i + 1);
            }
        }
    }
          
    return 0;
}