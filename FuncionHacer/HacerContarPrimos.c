#include <stdio.h>

int es_primo(int n) {
    if (n <= 1) return 0;
    int i = 2;
    do {
        if (n % i == 0) return 0; 
        i++;
    } while (i * i <= n);
    return 1; 
}

int contar_primos(int n) {
    int cuenta = 0;
    int i = 2;
    do {
        if (es_primo(i)) {
            cuenta++;
        }
        i++;
    } while (i <= n);
    return cuenta;
}

int main() {
    int n = 10;
    printf("El número de primos hasta %d es %d\n", n, contar_primos(n));
    return 0;
}
