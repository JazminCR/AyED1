#include <stdio.h>

int main() {
    int x, y;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    
    if (x>=y) {
        x = 0;
    } else {
        x = 2;
    }

    printf("El valor final de x es = %d\n", x );
    return 0;
}

// los programas 1e y 1f realizan lo mismo