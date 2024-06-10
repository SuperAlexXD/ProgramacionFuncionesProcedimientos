#include <stdio.h>

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 54, b = 24;
    printf("El MCD de %d y %d es %d\n", a, b, mcd(a, b));
    return 0;
}
