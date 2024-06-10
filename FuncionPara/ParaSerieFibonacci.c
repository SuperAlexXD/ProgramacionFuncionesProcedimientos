#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");
}

int main() {
    int n = 10;
    fibonacci(n);
    return 0;
}
