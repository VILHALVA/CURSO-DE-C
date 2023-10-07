#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = 2;
    int resultado;

    resultado = a + b * c; // Multiplicação tem precedência sobre a adição.
    printf("Resultado 1: %d\n", resultado);

    resultado = (a + b) * c; // Usando parênteses para forçar a adição primeiro.
    printf("Resultado 2: %d\n", resultado);

    resultado = a / b + c; // Divisão tem precedência sobre a adição.
    printf("Resultado 3: %d\n", resultado);

    resultado = a / (b + c); // Usando parênteses para forçar a adição primeiro.
    printf("Resultado 4: %d\n", resultado);

    resultado = a % b + c; // Módulo tem precedência sobre a adição.
    printf("Resultado 5: %d\n", resultado);

    resultado = (a % b) + c; // Usando parênteses para forçar o módulo primeiro.
    printf("Resultado 6: %d\n", resultado);

    return 0;
}
