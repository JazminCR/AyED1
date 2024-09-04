#include <stdio.h>
#include <assert.h>

struct div_t {
    int cociente;
    int resto;
};

struct div_t division(int x, int y){ 
    struct div_t res;
    res.cociente = x / y;
    res.resto = x % y;
    return res;
}

int main() {
    int x, y, c, r;
    struct div_t valor;
    printf("Ingrese el denominador \n");
    scanf("%d", &x);
    printf("Ingrese el divisor \n");
    scanf("%d", &y);
    assert (x >= 0);
    if (y == 0) {
        printf("Error: el divisor debe ser mayor a 0\n");
    }
    assert (y > 0);
    valor = division(x,y);
    c = valor.cociente;
    r = valor.resto;
    printf("El cociente de la división es %i\n", c);
    printf("El resto de la división es %i\n", r);
    return 0;
}