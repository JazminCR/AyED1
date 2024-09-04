#include <stdbool.h>
#include <stdio.h>

bool es_primo(int n) {
    
    bool res = true;
    int i = 2;
    
    while (i < n - 1) {
        res = res && n % i != 0;
        i = i + 1;
    }
    return res;
}

int nesimo_primo(int N) {

    int j = 0;
    int n = 2;
    int p = 2;

    while (j <= N) {
        if (es_primo(n)) {
            p = n;
            j = j + 1;
        }
        n = n+1;
    }
    return p;
}


int main(void) {
    int N;
    printf("Ingrese N: ");
    scanf("%d", &N);
    while (N<0) {
        printf("Error: N no debe ser negativo\n");
        printf("Ingrese N: ");
        scanf("%d", &N);
    }
    if (N>=0) {
        int p = nesimo_primo(N);
        printf("El primo n°%d es %d\n", N, p);  
    }
    return 0;
}