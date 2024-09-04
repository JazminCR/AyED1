#include <stdio.h>

typedef struct _persona
{
    char *nombre; /*puntero, una variable que contiene una direccion de memoria
                    Este puntero de nombre 'nombre' apunta a elementos de tipo char*/
    float altura;
    float peso;
    int edad;
} persona_t; /* en vez de declarar variables de tipo struct _persona, 
                usamos typedef para ponerle un sinonimo y ahorrarnos escribir el struct cada vez
                que querramos declarar una nueva variable, ahora las variables de este tipo se 
                definen solamente como (ej) persona_t var*/

float peso_promedio(persona_t arr[], unsigned int longitud)
{
    int i = 0;
    float prom = 0;
    while (i < longitud)
    {
        prom = prom + arr[i].peso;
        i = i + 1;
    }
    prom = prom / longitud;
    return prom;
};

persona_t persona_de_mayor_edad(persona_t arr[], unsigned int longitud) /*Funcion de tipo persona_t, 
                                                                        toma un arreglo de tipo persona_t y
                                                                        una longitud del arreglo, de tipo 
                                                                        unsigned int, devuelve cosas del 
                                                                        tipo persona_t, es decir, cosas 
                                                                        que tienen nombre, altura, peso 
                                                                        y edad*/
{
    int i = 0, mayor = -20000000;
    char *persona_mayor = ""; /*hacemos un puntero para que acceda a variables de 
                                tipo char, como persona_ --> nombre! y le damos un valor inicial*/
    while (i < longitud)
    {
        if (arr[i].edad > mayor)
        {
            persona_mayor = arr[i].nombre; /* le asigno a donde apunta el puntero 
                                            persona_mayor, en este caso, a la variable nombre, 
                                            del arreglo arr[], de tipo persona_t*/
            mayor = arr[i].edad; // le asigno a mayor la nueva edad mas grande
        }
        i = i + 1;
    }
    persona_t ma; //devuelvo un valor de tipo persona_t
    ma.nombre = persona_mayor; /*como persona_t tienen 4 campos, nombre, edad, 
                                altura y peso, elijo con el punto '.' a qué variable 
                                quiero acceder*/
    return ma;
}

persona_t persona_de_menor_altura(persona_t arr[], unsigned int longitud)
{
    int i = 0;
    float menor = 20000000;
    char *persona_masbaja = "";
    //persona_masbaja = arr[0].nombre;
    while (i < longitud)
    {
        if (arr[i].altura < menor)
        {
            persona_masbaja = arr[i].nombre;
            menor = arr[i].altura;
        }
        i = i + 1;
    }
    persona_t me;
    me.nombre = persona_masbaja;
    return me;
}

int main()
{
    persona_t p1 = {"Paola", 21, 1.85, 75};
    persona_t p2 = {"Luis", 54, 1.75, 69};
    persona_t p3 = {"Julio", 40, 1.70, 80};
    persona_t p4 = {"Carla", 22, 1.50, 70};
    persona_t p5 = {"Nicolas", 20, 1.77, 73};
    persona_t p6 = {"Mariana", 61, 2.10, 78};

    unsigned int longitud = 6;
    persona_t arr[] = {p1, p2, p3, p4, p5, p6};
    printf("El peso promedio es %f\n", peso_promedio(arr, longitud));
    persona_t p = persona_de_mayor_edad(arr, longitud);
    printf("El nombre de la persona con mayor edad es %s\n", p.nombre);
    p = persona_de_menor_altura(arr, longitud);
    printf("El nombre de la persona con menor altura es %s\n", p.nombre);
    return 0;
}