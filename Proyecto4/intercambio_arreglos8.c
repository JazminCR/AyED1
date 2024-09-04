#include <stdio.h>
#include <assert.h>

int pedirEntero(void) {
    int i;
    printf("Ingrese un entero \n");
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

void intercambiar(int a[], int tam, int i, int j) {
    int aux, h;
    assert(i < tam  && j < tam);
    aux = a[i];
    a[i] = a[j];
    a[j] = aux;

    h=0;
    printf("\n\nEl arreglo modificado es:\n");
    while (h<tam) {
    printf("El elemento %d es %d\n",h,a[h]);
    h=h+1;
    }
}

int main(void) {
    int N, x, y;
    printf("Ingrese el tamaño del arreglo \n");
    scanf("%d", &N);
    printf("Ingrese una posición del arreglo \n");
    scanf("%d", &x);
    printf("Ingrese una posición del arreglo \n");
    scanf("%d", &y);
    int array[N];
    if (x<N && y<N) {
        pedirArreglo(array,N);
        intercambiar(array,N,x,y);
    } else {
        printf("La posición no está dentro del arreglo \n");
    }
    return 0;
}