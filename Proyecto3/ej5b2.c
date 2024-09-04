#include <stdio.h>
#include <stdbool.h>

int main() {
    int x, i, aux;
    bool res;
    printf("Ingrese un valor entero para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor entero para i\n");
    scanf("%d", &i);
    printf("Ingrese 0 para false o 1 para true\n");
    scanf("%d", &aux);
    res = aux;

   i = 2;
   res = true;
    
    while (i < x && res) {
        res = res && (i % x != 0);
        i = i + 1;
    }
 
    printf("El valor final de x es = %d\n", x );
    printf("El valor final de i es = %d\n", i );
    printf("El valor final de res es = %d\n", res );
    
    return 0;
}

// estado 0: x = 5, i = 0, res = false
// estado 1: x = 5, i = 3, res = true
// estado 2: x = 5, i = 4, res = true
// estado 3: x = 5, i = 5, res = true