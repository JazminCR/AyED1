#include <stdio.h>
#include <assert.h>

int pedirEntero(void) {
    int i;
    printf("Ingrese un entero\n");
    scanf("%d", &i);
    assert(i>0);
    return i;
}

void holaHasta(int n) {
    int i;
    i=1;
    while (i<=n) {
        printf("Hola\n");
        i = i+1;
    }
}

int main(void) {
    int valor;
    valor = pedirEntero();
    holaHasta(valor);
    return 0;
}