#include <stdio.h>

int main()

{
    
    int t[3];
    int max = 0;
    int max_index;
    int t_max;
    scanf("%d %d %d", &t[0], &t[1], &t[2]);
    if (t[0] + t[1] > t[2] && t[1] + t[2] > t[0] && t[0] + t[2] > t[1]) {
        printf("%d", t[0] + t[1] + t[2]);
    }
    else {
        for (int i = 0; i < 2; i++) {
            for (int j = i; j < 2; j++) {
                if (t[j] > t[j + 1]) {
                    int temp;
                    temp = t[j];
                    t[j] = t[j + 1];
                    t[j + 1] = temp;
                }
            }
        }
        t_max = t[0] + t[1] + (t[2] - (t[2] - t[0] - t[1] + 1));
        printf("%d", t_max);
    }
         
    return 0;
}

