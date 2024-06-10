#include <stdio.h>

int suma_cuadrados(int n) {
    int suma = 0;
    int i = 1;
    do {
        suma += i * i;
        i++;
    } while (i <= n);
    return suma;
}

int main() {
    int n = 3;
    printf("La suma de los cuadrados de los primeros %d números es %d\n", n, suma_cuadrados(n));
    return 0;
}
