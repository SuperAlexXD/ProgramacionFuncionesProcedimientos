#include <stdio.h>

int factorial(int n) {
    int resultado = 1;
    int i = 1;
    do {
        resultado = resultado * i;
        i++;
    } while (i <= n);
    return resultado;
}

int suma_factoriales(int n) {
    int suma = 0;
    int i = 1;
    do {
        suma += factorial(i);
        i++;
    } while (i <= n);
    return suma;
}

int main() {
    int n = 3;
    printf("La suma de los factoriales de los primeros %d números es %d\n", n, suma_factoriales(n));
    return 0;
}
