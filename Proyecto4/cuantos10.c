#include <stdio.h>

void pedirArreglo(int a[], int n_max) {
    int i;
    i=0;
    while (i<n_max) {
	    printf("Ingrese el elemento %d del arreglo:\n",i);
	    scanf("%d",&a[i]);
	    i=i+1;
    }
}

struct comp_t {
int menores;
int iguales;
int mayores;
};

struct comp_t cuantos(int a[], int tam, int elem) {
    struct comp_t est;
    est.iguales = 0;
    est.menores = 0;
    est.mayores = 0;
    int i = 0;
    while (i<tam) {
        if (a[i] == elem) {
            est.iguales = est.iguales + 1;
        } else if (a[i] < elem) {
            est.menores = est.menores + 1;
        } else {
            est.mayores = est.mayores + 1;
        }
    i = i + 1;
    } 
    return est;
}

int main() {
    int N, x, i, ma, me;
    printf("Ingrese el tamaño del arreglo \n");
    scanf("%d", &N);
    printf("Ingrese un entero para comparar \n");
    scanf("%d", &x);
    int array[N];
    pedirArreglo(array,N);
    struct comp_t valor;
    valor = cuantos(array, N, x);
    i = valor.iguales;
    me = valor.menores;
    ma = valor.mayores;
    printf("La cant de elementos iguales es %i\n", i);
    printf("La cant de elementos menores es %i\n", me);
    printf("La cant de elementos mayores es %i\n", ma);
    return 0;
}