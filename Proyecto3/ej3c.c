#include <stdio.h>

int main() {
    int x, y;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    y = y + y;
    x = x + y;
    printf("El valor final de y es = %d\n", y );
    printf("El valor final de x es = %d\n", x );
    return 0;
}

// x = 2, y = 3 devuelve x = 8, y = 6
// x = 1, y = 0 devuelve x = 1, y = 0
// x = 3, y = 5 devuelve x = 13, y = 10