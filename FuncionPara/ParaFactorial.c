#include <stdio.h>

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}

int main() {
    int n = 5;
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}
