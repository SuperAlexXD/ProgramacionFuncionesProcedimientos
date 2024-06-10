#include <stdio.h>

int obtenerNumero();
int sumarDigitos(int numero);
void mostrarResultado(int numero, int suma);

int main() {
    int numero = obtenerNumero();
    int suma = sumarDigitos(numero);
    mostrarResultado(numero, suma);
    return 0;
}

int obtener_numero() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    return numero;
}

int sumar_digitos(int numero) {
    int suma = 0;
    while (numero > 0) {
        suma = suma + numero % 10;
        numero = numero / 10;
    }
    return suma;
}

void mostrarResultado(int numero, int suma) {
    printf("La suma de los digitos de %d es %d\n", numero, suma);
}
