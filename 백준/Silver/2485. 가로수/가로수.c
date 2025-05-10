#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b);

int main()
{
    int N;
    scanf("%d", &N);
    int* tree; // 심어져 있는 가로수의 위치를 담는 배열
    int* ary; // 심어져 있는 가로수들 사이의 간격을 담을 배열
    tree = (int*)malloc(N * sizeof(int));
    ary = (int*)malloc((N - 1) * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &tree[i]);
        if (i > 0) {
            ary[i - 1] = tree[i] - tree[i - 1];
        }
    }
    
    int gcd;
    int k;
    for ( k = 0; k < N - 2; k++){
        ary[k + 1] = GCD(ary[k], ary[k + 1]);
    }
    gcd = ary[k];

    int x, new;
    x = (tree[N - 1] - tree[0]) / gcd;
    new = x - (N - 1);
    printf("%d", new);

    free(tree);
    free(ary);
    return 0;
}
int GCD(int a, int b) {
    if (!b) return a;
    return GCD(b, a % b);
}