#include <stdio.h>

int main()

{
    
    char ary[101];
    scanf("%s", ary);
    char *pa = ary;
    int count = 0;
    
    while(*pa++ != '\0'){
        count++;
    }
    //printf("%d", count);
    int f = 1;
    for (int i = 0; i < count / 2; i++) {
        if (ary[i] != ary[count - 1 - i]) {
            f = 0;
            break;
        }
    }
    printf("%d", f);

    return 0;
}