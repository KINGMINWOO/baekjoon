#include <stdio.h>

int main()

{
    int ary[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ary[i]);
    }
    int max, max_index;
    for (int i = 4; i >= 1; i--) {
        max = 0;
        for (int j = 0; j <= i; j++) {
            if (ary[j] > max) {
                max = ary[j];
                max_index = j;
            }
        }
        int temp;
        temp = ary[max_index];
        ary[max_index] = ary[i];
        ary[i] = temp;
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += ary[i];
    }
    printf("%d\n", sum / 5);
    printf("%d", ary[2]);
          
    return 0;
}