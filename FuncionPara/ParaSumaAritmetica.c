#include <stdio.h>

int sumaSerieAritmetica(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }
    return suma;
}

int main() {
    int n = 10;
    printf("La suma de los primeros %d términos es %d\n", n, sumaSerieAritmetica(n));
    return 0;
}
