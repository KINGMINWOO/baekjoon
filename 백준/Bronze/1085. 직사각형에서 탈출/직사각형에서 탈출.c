#include <stdio.h>

int main()

{

    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int x_dis = x > w - x ? w - x : x;
    int y_dis = y > h - y ? h - y : y;
    printf("%d", (x_dis > y_dis ? y_dis : x_dis));

    return 0;
}