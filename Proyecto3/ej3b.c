#include <stdio.h>

int main() {
    int x, y;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    x = x + y;
    y = y + y;
    printf("El valor final de x es  = %d\n", x );
    printf("El valor final de y es = %d\n", y );
    return 0;
}

// x = 2, y = 3 devuelve x = 5, y = 6
// x = 1, y = 0 devuelve x = 1, y = 0
// x = 3, y = 5 devuelve x = 8, y = 10