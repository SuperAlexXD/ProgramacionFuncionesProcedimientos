#include <stdio.h>

int suma_cubos(int n) {
    int suma = 0;
    int i = 1;
    do {
        suma += i * i * i;
        i++;
    } while (i <= n);
    return suma;
}

int main() {
    int n = 3;
    printf("La suma de los cubos de los primeros %d números es %d\n", n, suma_cubos(n));
    return 0;
}
