#include <stdio.h>

int invertir_numero(int numero) {
    int invertido = 0;
    while (numero != 0) {
        invertido = invertido * 10 + numero % 10;
        numero = numero / 10;
    }
    return invertido;
}

int main() {
    int numero = 56378;
    int invertido = invertir_numero(numero);
    printf("El número %d invertido es %d\n", numero, invertido);
    return 0;
}
