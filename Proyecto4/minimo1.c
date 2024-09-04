#include <stdio.h>

int pedirEntero(void) {
    int i;
    printf("Ingrese un entero i\n");
    scanf("%d", &i);
    return i;
}



int main(void) {
    int x, y, z;
    x = pedirEntero();
    y = pedirEntero();
    if (x >= y) {
        z = y;
    } else {
        z = x;
    }
    printf("El mínimo es %i\n", z);
    return 0;
}