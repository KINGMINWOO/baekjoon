#include <stdio.h>

int main()

{
    int ary[6];
    int a[6] = { 1,1,2,2,2,8 };
    for (int i = 0; i < 6; i++) {
        int j, ans;
        scanf("%d", &j);
        ans = a[i] - j;
        ary[i] = ans;
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", ary[i]);
    }



    return 0;
}