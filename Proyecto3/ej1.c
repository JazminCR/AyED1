#include <stdio.h>

int main() {
    int x,y,z;
    printf("Ingrese x\n");
    scanf("%d", &x);
    printf("Ingrese y\n");
    scanf("%d", &y);
    printf("Ingrese z\n");
    scanf("%d", &z);

    printf("x + y + 1 = %d\n", x + y + 1);
    // x=7 , y=3, z=5 --> devuelve 11
    // x=1 , y=10, z=8 --> devuelve 12
    printf("z * z + y * 45 - 15 * x = %d\n", z * z + y * 45 - 15 * x);
    // x=7 , y=3, z=5 --> devuelve 55
    // x=1 , y=10, z=8 --> devuelve 499
    printf("y - 2 == (x * 3 + 1) %% 5 = %d\n", y - 2 == (x * 3 + 1) % 5);
    // x=7 , y=3, z=5 --> devuelve 0
    // x=1 , y=10, z=8 --> devuelve 0
    printf("y / 2 * x = %d\n", y / 2 * x);
    // x=7 , y=3, z=5 --> devuelve 7
    // x=1 , y=10, z=8 --> devuelve 5
    printf("y < x * z = %d\n", y < x * z);
    // x=7 , y=3, z=5 --> devuelve 1
    // x=1 , y=10, z=8 --> devuelve 0
    return 0;
}

// En la última expresión el resultado tiene tipo Int