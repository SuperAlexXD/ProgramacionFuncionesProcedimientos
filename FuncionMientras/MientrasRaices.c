#include <stdio.h>

int raizCubica(int numero) {
    int raiz = 0;
    int cubo = 0;
    while (cubo <= numero) {
        raiz++;
        cubo = raiz * raiz * raiz;
    }
    return raiz - 1;
}

int main() {
    int numero = 27;
    printf("La raíz cúbica de %d es %d\n", numero, raizCubica(numero));
    return 0;
}
