#include <stdio.h>

double producto_fraccionarios(int n) {
    double producto = 1.0;
    int i = 1;
    do {
        producto *= 1.0 / i;
        i++;
    } while (i <= n);
    return producto;
}

int main() {
    int n = 3;
    printf("El producto de la serie fraccionaria hasta 1/%d es %f\n", n, producto_fraccionarios(n));
    return 0;
}
