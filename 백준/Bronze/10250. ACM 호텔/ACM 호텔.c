#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int T, H, W, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &H, &W, &N);
        int hei, num;
        hei = N % H;
        if (hei != 0) {
            num = N / H + 1;
            if (num < 10) {
                printf("%d0%d\n", hei, num);
            }
            else {
                printf("%d%d\n", hei, num);
            }
        }
        else {
            num = N / H;
            if (num < 10) {
                printf("%d0%d\n", H, num);
            }
            else {
                printf("%d%d\n", H, num);
            }
        }
    }

    return 0;
}