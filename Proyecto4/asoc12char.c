#include <stdio.h>
#include <stdbool.h>
#define N 3

typedef char clave_t;
typedef int valor_t;

struct asoc {
    clave_t clave;
    valor_t valor;
};

void pedirArreglo(struct asoc a[], int n_max) {
    int i = 0;
    while (i<n_max) {
	    printf("Ingrese una clave para el elemento %d:\n", i);
        scanf(" %c",&a[i].clave);
        printf("Ingrese un valor para el elemento %d:\n", i);
        scanf("%d",&a[i].valor);
	    i=i+1;
    }
}

bool asoc_existe(struct asoc a[], int tam, clave_t c) {
    int i=0;
    bool ex;
    while (i < tam) {
        if(a[i].clave == c) {
            ex = true;
        } else {
            ex = false;
        }
        i=i+1;
    }
    return ex;
}

int main(void) {
    struct asoc array[N];
    char x;
    bool exis;
    pedirArreglo(array,N);
    printf("Ingrese la clave a verificar:\n");
    scanf(" %c",&x);
    exis = asoc_existe(array,N,x);
    if(exis == true){
        printf("La clave ingresada existe\n");
    }
    else{
        printf("La clave ingresada no existe\n");
   }
    return 0;
}