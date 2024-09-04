#include <stdio.h>

int pedirEntero(void) {
    int i;
    printf("Ingrese el tamaño del arreglo \n");
    scanf("%d", &i);
    return i;
}

void pedirArreglo(int a[], int n_max) {
    int i;
    i=0;
    while (i<n_max) {
	    printf("Ingrese el elemento %d del arreglo:\n",i);
	    scanf("%d",&a[i]);
	    i=i+1;
    }
}

int sumatoria(int a[], int tam) {
    int i, suma;
    i = 0;
    suma = 0;
    while (i < tam) {
        suma = suma + a[i];
        i=i+1;
    }
    printf("La suma de los elementos del arreglo es %d\n",suma);
    return suma;
}

int main(void) {
    int N;
    N = pedirEntero();
    int array[N];
    pedirArreglo(array,N);
    sumatoria(array, N);
    return 0;
}