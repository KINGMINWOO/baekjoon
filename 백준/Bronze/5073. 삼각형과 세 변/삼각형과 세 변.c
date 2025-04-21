#include <stdio.h>

int main()

{
    
    int x, y, z;
    int max;
    while (1) {
        scanf("%d %d %d", &x, &y, &z);
        if (x == 0 && y == 0 && z == 0) break;
        max = 0;
        if (x + y <= z || y + z <= x || z + x <= y) printf("Invalid\n");
        else {
            if (x == y && y == z && z == x) printf("Equilateral\n");
            else if (x == y || y == z || z == x) printf("Isosceles\n");
            else printf("Scalene\n");
        }
    }
     
    return 0;
}
