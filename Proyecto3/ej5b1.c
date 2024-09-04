#include <stdio.h>

int main() {
    int x, y, i;
    printf("Ingrese un valor entero para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor entero para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor entero para i\n");
    scanf("%d", &i);

    i = 0;
    
    while (x >= y) {
        x = x - y;
        i = i + 1;
    }
 
    printf("El valor final de x es = %d\n", x );
    printf("El valor final de y es = %d\n", y );
    printf("El valor final de i es = %d\n", i );
    return 0;
}

// estado 0: x = 13, y = 3, i = 0
// estado 1: x = 10, y = 3, i = 1
// estado 2: x = 7, y = 3, i = 2
// estado 3: x = 4, y = 3, i = 3
// estado 4: x = 1, y = 3, i = 4