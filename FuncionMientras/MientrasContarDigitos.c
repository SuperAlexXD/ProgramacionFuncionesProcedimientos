#include <stdio.h>

int contarDigitos(int numero) {
    int digitos = 0;
    while (numero != 0) {
        numero = numero / 10;
        digitos++;
    }
    return digitos;
}

int main() {
    int numero = 49857;
    printf("El número %d tiene %d dígitos\n", numero, contarDigitos(numero));
    return 0;
}
