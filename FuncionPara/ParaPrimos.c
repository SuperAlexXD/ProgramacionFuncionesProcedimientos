#include <stdio.h>

int esPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int numero = 7;
    if (esPrimo(numero)) {
        printf("%d es primo\n", numero);
    } else {
        printf("%d no es primo\n", numero);
    }
    return 0;
}
