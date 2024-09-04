#include <stdio.h>

int main() {
    int x;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    
    while (x != 0) {
        x = 0;
    }
 
    printf("El valor final de x es = %d\n", x );
    return 0;
}