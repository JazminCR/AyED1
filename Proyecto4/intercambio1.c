#include <stdio.h>

int pedirEntero(void) {
    int i;
    printf("Ingrese un entero \n");
    scanf("%d", &i);
    return i;
}

int main(void) {
    int x, y, z, a;
    x = pedirEntero();
    y = pedirEntero();
    z = pedirEntero();
    a = z;
    z = x;
    x = y;
    y = a;
    printf("El valor de x es %i\n", x);
    printf("El valor de y es %i\n", y);
    printf("El valor de z es %i\n", z);
    return 0;
}