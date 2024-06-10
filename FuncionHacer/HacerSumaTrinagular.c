#include <stdio.h>

int numero_triangular(int n) {
    int suma = 0;
    int i = 1;
    do {
        suma = suma + i;
        i++;
    } while (i <= n);
    return suma;
}

int main() {
    int n = 4;
    printf("El %d-ésimo número triangular es %d\n", n, numero_triangular(n));
    return 0;
}
