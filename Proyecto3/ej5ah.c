#include <stdio.h>

int main() {
    int i;
    printf("Ingrese un valor entero y positivo para i\n");
    scanf("%d", &i);
    
    while (i != 0) {
        i = i - 1;
    }
 
    printf("El valor final de i es = %d\n", i);
    return 0;
}