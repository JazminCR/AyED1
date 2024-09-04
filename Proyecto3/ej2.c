#include <stdio.h>

int main() {
    int x,y,z,b,w;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
    printf("Ingrese un valor para b\n");
    scanf("%d", &b);
    printf("Ingrese un valor para w\n");
    scanf("%d", &w);

    printf("x %% 4 == 0 = %d\n", x % 4 == 0);
    // da True si x = 4

    printf("x + y == 0 && y - x == (-1)*z = %d\n", x + y == 0 && y - x == (-1)*z );
    // da True si x = -2, y = 2, z = -4
    
    printf("not b && w = %d\n", !b && w);
    // da False si b = 1, w = 2

    return 0;
}