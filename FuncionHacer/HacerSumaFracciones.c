#include <stdio.h>

double suma_fraccionarios(int n) {
    double suma = 0.0;
    int i = 1;
    do {
        suma += 1.0 / i;
        i++;
    } while (i <= n);
    return suma;
}

int main() {
    int n = 3;
    printf("La suma de la serie fraccionaria hasta 1/%d es %f\n", n, suma_fraccionarios(n));
    return 0;
}
