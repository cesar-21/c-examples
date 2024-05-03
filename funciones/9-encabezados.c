#include <stdio.h>
#include "9-encabezados.h"

int main() {

    int v;

    // Llama a las 3 funciones
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10);

    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);

    v = funcion5(10);

    // Imprime el valor que retornó funcion5()
    printf("v = %d\n", v);

    return 0;

}

// funcion1(): Imprime un mensaje
void funcion1() {
    printf("En funcion1()...\n");
}

// funcion2(): Imprime un mensaje y las variables que recibe como argumento
void funcion2(int a, float b) {
    printf("En funcion2()...\n");
    printf("a = %d, b = %.2f\n", a, b);
}

// funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
int funcion3(int x) {
    printf("En funcion3()...\n");
    int y = x + 2;
    return y;
}

// funcion5(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 3
int funcion5(int x) {
    printf("En funcion5()...\n");
    int y = x + 3;
    return y;
}

