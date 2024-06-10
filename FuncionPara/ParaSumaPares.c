#include <stdio.h>

int suma_pares(int n) {
    int suma = 0;
    for (int i = 2; i <= n; i += 2) {
        suma = suma + i;
    }
    return suma;
}

int main() {
    int n = 10;
    printf("La suma de los números pares hasta %d es %d\n", n, suma_pares(n));
    return 0;
}
