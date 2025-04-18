#include <stdio.h>
#include <string.h>
int main()

{
    char ary[350];
    scanf("%s", ary);
    //printf("%s", ary);
    int N = strlen(ary) + 1;
    int count = 0;

    for (int i = 0; i < N; i++) {
        if (ary[i] >= 'a' && ary[i] <= 'z') {
            count += 1;
        }
        if (ary[i] == 'l' || ary[i] == 'n') {
            if (ary[i + 1] == 'j') {
                count -= 1;
            }
        }
        if(ary[i] == 'd' && ary[i + 1] == 'z' && ary[i + 2] == '='){
            count -= 1;
        }
    }

    printf("%d", count);

    return 0;
}