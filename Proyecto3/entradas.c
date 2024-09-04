#include <stdio.h>

int pedirEntero(void) {
    int i;
    printf("Ingrese un entero i\n");
    scanf("%d", &i);
    return i;
}

void imprimeEntero(int x) {
    printf("El valor del entero es = %d\n", x);
}

int main(void) {
    int valor;
    valor = pedirEntero();
    imprimeEntero(valor);
    return 0;
}