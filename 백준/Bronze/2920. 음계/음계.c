#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
    char ary[9];
    int asc;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &asc);
        ary[i] = asc + 48;
    }
    ary[8] = '\0';
    if (strcmp(ary, "12345678") == 0) printf("ascending");
    else if (strcmp(ary, "87654321") == 0) printf("descending");
    else printf("mixed");

    return 0;
}