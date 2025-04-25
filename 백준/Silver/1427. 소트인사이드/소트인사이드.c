#include <stdio.h>
#include <string.h>

int main()
{
    
    char ary[11] = { 0, };
    char num;
    for (int i = 0; i < 11; i++) {
        num = getchar();
        if (num == '\n') break;
        ary[i] = num;
    }
    int N = strlen(ary);
    
    char max;
    int max_index;
    for (int i = 0; i < N - 1; i++) {
        max = 0;
        for (int j = N - 1; j >= i; j--) {
            if (ary[j] > max) {
                max = ary[j];
                max_index = j;
            }
        }
        char temp;
        temp = ary[max_index];
        ary[max_index] = ary[i];
        ary[i] = temp;
    }

    for (int i = 0; i < N; i++) {
        printf("%d", ary[i] - 48);
    }
           
    return 0;
}