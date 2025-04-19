#include <stdio.h>

int main()

{
    int paper[101][101] = { 0, };

    int N;
    int x, y;
    scanf("%d", &N);
    int area = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &x, &y);
        for (int j = x; j < x + 10; j++) {
            for (int k = y + 10; k > y; k--) {
                if (paper[k][j] == 0) {
                    paper[k][j] = 1;
                    area += 1;
                }
            }
        }
    }
    printf("%d\n", area);
    
    return 0;
}