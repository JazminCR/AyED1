#include <stdio.h>

int main() {
    int x, y, z, m;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
    printf("Ingrese un valor para m\n");
    scanf("%d", &m);
    
    if (x<y) {
        m = x;
    } else {
        m = y;
    }

    if (m>=z) {
        m = z;
    } 

    printf("El valor final de x es = %d\n", x );
    printf("El valor final de y es = %d\n", y );
    printf("El valor final de z es = %d\n", z );
    printf("El valor final de m es = %d\n", m );
    return 0;
}

// estado 0: x = 5, y = 4, z =8, m = 0
// estado 1: x = 5, y = 4, z =8, m = 4
// estado 2: x = 5, y = 4, z =8, m = 4