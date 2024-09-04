#include <stdio.h>

int main() {
    int x, y, xaux;
    printf("Ingrese un entero x\n");
    scanf("%d", &x);
    printf("Ingrese un entero y\n");
    scanf("%d", &y);
    xaux = x;
    x = x + 1,
    y = xaux + y;
    printf("El valor final de x es: %i\n", x);
    printf("El valor final de y es: %i\n", y);
    return 0;
}