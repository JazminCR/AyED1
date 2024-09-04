#include <stdio.h>
#include <stdbool.h>

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

bool existe_positivo(int a[], int tam) {
    bool i;
    int m;
    m = 0;
    i = false;
    while ( m < tam) {
        if (a[m] > 0) {
            i = true;
        } 
        m = m +1;
    }
    printf("El resultado es %d\n", i);
    return i;
}

bool todos_positivos(int a[], int tam) {
    bool i;
    i = true;
    int m;
    m = 0;
    while ( m < tam) {
        if (a[m] < 0) {
            i = false;
        }
        m = m +1;
    }
    printf("El resultado es %d\n", i);
    return i;
}

int main(void) {
    int N, x;
    N = pedirEntero();
    int array[N];
    pedirArreglo(array,N);
    printf("Ingrese 1 para existe positivos o ingrese 2 para todos positivos \n");
    scanf("%d", &x);
    if (x == 1) {
        existe_positivo(array, N);
    } else if (x == 2) {
        todos_positivos(array, N);
    } else {
        printf("Debe ingresar el nro 1 o 2 \n");
    }
    return 0;
}