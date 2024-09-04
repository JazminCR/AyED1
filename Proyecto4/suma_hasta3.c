#include <stdio.h>

int pedirEntero(void) {
    int i;
    printf("Ingrese un entero i\n");
    scanf("%d", &i);
    return i;
}

int suma_hasta(int N) {
    int suma;
    suma = (N * (N+1)) / 2;
    return suma;
}

int main(void) {
    int valor;
    valor = pedirEntero();
    if (valor < 0) {
        printf("No es posible realizar el cálculo, debe ingresar un número entero positivo");
    } else {
        int sumaFinal;
        sumaFinal = suma_hasta(valor);
        printf("La suma es %i\n", sumaFinal);
    }
    return 0;
}