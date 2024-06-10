#include <stdio.h>

int multiplicar(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado = resultado + a;
    }
    return resultado;
}

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado = multiplicar(resultado, base);
    }
    return resultado;
}

int main() {
    int base = 2;
    int exponente = 3;
    printf("%d^%d = %d\n", base, exponente, potencia(base, exponente));
    return 0;
}
