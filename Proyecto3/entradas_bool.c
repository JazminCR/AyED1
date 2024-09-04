#include <stdio.h>
#include <stdbool.h>

bool pedirBooleano(void) {
    int aux;
    bool i;
    printf("Ingrese 0 para false o 1 para true\n");
    scanf("%d", &aux);
    i = aux;
    return i;
}

void imprimeBooleano(bool x) {
    if (x == 0) {
        printf("El booleano es falso\n");
    } else {
        printf("El booleano es verdadero\n2");
    }
}

int main(void) {
    int valor;
    valor = pedirBooleano();
    imprimeBooleano(valor);
    return 0;
}