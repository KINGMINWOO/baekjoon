#include <stdio.h>

int main()

{
    int N, k;
    scanf("%d %d", &N, &k);
    int ary[1001];
    int max;
    int max_index;
    for (int i = 0; i < N; i++) {
        scanf("%d", &ary[i]);
    }
    for (int i = N - 1; i > 0; i--) {
        max = -1;
        for (int j = 0; j <= i; j++) {
            if (ary[j] > max) {
                max = ary[j];
                max_index = j;
            }
        }
        int temp = ary[max_index];
        ary[max_index] = ary[i];
        ary[i] = temp;
    }
    
    printf("%d", ary[N - k]);
          
    return 0;
}