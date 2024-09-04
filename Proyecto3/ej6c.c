#include <stdio.h>

int pedirEntero(void) {
    int i;
    printf("Ingrese un entero \n");
    scanf("%d", &i);
    return i;
}

void imprimeEntero(int x) {
    printf("El valor del entero es = %d\n", x);
}

int main() {
    int x, y, z, m;
    x = pedirEntero();
    y = pedirEntero();
    z = pedirEntero();
    m = pedirEntero();
    
    
    if (x<y) {
        m = x;
    } else {
        m = y;
    }

    if (m>=z) {
        m = z;
    } 

    imprimeEntero(x);
    imprimeEntero(y);
    imprimeEntero(z);
    imprimeEntero(m);

    return 0;
}

// La ventaja que se encuentra es que se utiliza menos código,
// se puede escribir de manera más simple

// se puede utilizar en los ejercicios 1,2,3,4 y 5