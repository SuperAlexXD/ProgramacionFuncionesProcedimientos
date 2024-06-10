#include <stdio.h>

int suma_impares(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i += 2) {
        suma = suma + i;
    }
    return suma;
}

int main() {
    int n = 10;
    printf("La suma de los números impares hasta %d es %d\n", n, suma_impares(n));
    return 0;
}
