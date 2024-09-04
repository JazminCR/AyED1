#include <stdio.h>
#define N 5

/* int main(void) {
    int N;
    printf("Ingrese un valor para N\n");
    scanf("%d", &N);
    int i;
    int a[N];

    i=0;
    while (i<N) {
	printf("Ingrese el elemento %d del arreglo:\n",i);
	scanf("%d",&a[i]);
	i=i+1;
    }

    i=0;
    printf("\n\nEl arreglo ingresado:\n");
    while (i<N) {
    printf("El elemento %d es %d\n",i,a[i]);
    i=i+1;
    }
} */

void pedirArreglo(int a[], int n_max) {
    int i;
    i=0;
    while (i<n_max) {
	    printf("Ingrese el elemento %d del arreglo:\n",i);
	    scanf("%d",&a[i]);
	    i=i+1;
    }
}

void imprimeArreglo(int a[], int n_max) {
    int i;
    i=0;
    printf("\n\nEl arreglo ingresado:\n");
    while (i<n_max) {
        printf("El elemento %d es %d\n",i,a[i]);
        i=i+1;
    }
}

int main(void) {
    int array[N];
    pedirArreglo(array,N);
    imprimeArreglo(array,N);
    return 0;
}