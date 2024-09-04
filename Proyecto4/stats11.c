#include <stdio.h>
#include <assert.h>

void pedirArreglo(float a[], int n_max) {
    int i;
    i=0;
    while (i<n_max) {
	    printf("Ingrese el elemento %d del arreglo:\n",i);
	    scanf("%f",&a[i]);
	    i=i+1;
    }
}

struct datos_t {
  float maximo;
  float minimo;
  float promedio;
};

struct datos_t stats(float a[], int tam) {
    assert (tam >= 1);
    struct datos_t est;
    est.maximo = a[0];
    est.minimo = a[0];
    est.promedio = 0;
    
    float suma = 0;
    int i = 0;
    while (i < tam) {
        if (a[i] < est.minimo) {
            est.minimo = a[i];
        } else if (a[i] > est.maximo) {
            est.maximo = a[i];
        }
        suma = suma + a[i];
        i = i + 1;
    }
    est.promedio = suma / tam;
    return est;
}

int main() {
    int N;
    float min, max, prom;
    printf("Ingrese el tamaño del arreglo \n");
    scanf("%d", &N);
    float array[N];
    pedirArreglo(array,N);
    struct datos_t valor;
    valor = stats(array, N);
    min = valor.minimo;
    max = valor.maximo;
    prom = valor.promedio;
    printf("El mínimo es %f\n", min);
    printf("El máximo es %f\n", max);
    printf("El promedio es %f\n", prom);
    return 0;
}