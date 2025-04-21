#include <stdio.h>

int main()

{
    
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if (x + y + z == 180) {
        if (x == y && y == z && z == x) printf("Equilateral");
        else if (x == y || y == z || z == x) printf("Isosceles");
        else printf("Scalene");
    }
    else printf("Error");

    return 0;
}