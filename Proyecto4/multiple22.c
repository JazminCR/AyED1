#include <stdio.h>

int main() {
    int x, y, z, xaux, yaux;
    printf("Ingrese un entero x\n");
    scanf("%d", &x);
    printf("Ingrese un entero y\n");
    scanf("%d", &y);
    printf("Ingrese un entero z\n");
    scanf("%d", &z);
    xaux = x;
    yaux = y;
    x = y;
    y = y + xaux + z;
    z = yaux + xaux;
    printf("El valor final de x es: %i\n", x);
    printf("El valor final de y es: %i\n", y);
    printf("El valor final de z es: %i\n", z);
    return 0;
}