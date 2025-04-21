#include <stdio.h>

int main()

{
    
    int N;
    int x, y;
    int x_max = -10001, x_min = 10001;
    int y_max = -10001, y_min = 10001;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &x, &y);
        if (x > x_max) x_max = x;
        if (x < x_min) x_min = x;
        if (y > y_max) y_max = y;
        if (y < y_min) y_min = y;
    }
    printf("%d", (x_max - x_min) * (y_max - y_min));

    return 0;
}
