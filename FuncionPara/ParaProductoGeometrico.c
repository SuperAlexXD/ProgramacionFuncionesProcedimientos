#include <stdio.h>

int productoSerieGeometrica(int base, int n) {
    int producto = 1;
    for (int i = 0; i < n; i++) {
        producto = producto * base;
    }
    return producto;
}

int main() {
    int base = 2;
    int n = 4;
    printf("El producto de los primeros %d términos de la serie geométrica con base %d es %d\n", n, base, productoSerieGeometrica(base, n));
    return 0;
}
