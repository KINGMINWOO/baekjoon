#include <stdio.h>

int main(void)
{
    
    int a;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        int j, h;
        scanf("%d %d", &j, &h);
        printf("Case #%d: %d\n", i, j + h);
    }
    
	return 0;
}