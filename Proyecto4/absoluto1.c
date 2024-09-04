#include <stdio.h>

int main(void) {
    int x, y;
    printf("Ingrese un entero\n");
    scanf("%d", &x);
    if (x < 0) {
        y = (-1)*x;
    } else {
        y = x;
    }
    printf("El valor absoluto es %i\n", y);
    return 0;
}