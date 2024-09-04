#include <stdio.h>
#include <limits.h>

void pedirArreglo(int a[], int n_max) {
    int i;
    i=0;
    while (i<n_max) {
	    printf("Ingrese el elemento %d del arreglo:\n",i);
	    scanf("%d",&a[i]);
	    i=i+1;
    }
}

int minimo_pares(int a[], int tam) {
    int m, min;
    min = INT_MAX;
    m = 0;
    while ( m < tam) {
        if ((a[m] % 2 == 0) && (a[m] <= min)) {
            min = a[m];
        }
        m = m +1;
    } 
    printf("El mínimo par es %d\n", min);
    return min;
}

int minimo_impares(int a[], int tam) {
    int m, min;
    min = INT_MAX;
    m = 0;
    while ( m < tam) {
        if ((a[m] % 2 != 0) && (a[m] <= min)) {
            min = a[m];
        }
        m = m +1;
    } 
    printf("El mínimo impar es %d\n", min);
    return min;
}

int main(void) {
    int N, x, y;
    printf("Ingrese el tamaño del arreglo \n");
    scanf("%d", &N);
    int array[N];
    pedirArreglo(array,N);
    x = minimo_pares(array,N);
    y = minimo_impares(array,N);
    if (x<=y) {
        printf("El mínimo elemento es %d\n", x);
    } else {
        printf("El mínimo elemento es %d\n", y);
    }
    return 0;
}