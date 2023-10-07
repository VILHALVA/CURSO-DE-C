#include <stdio.h>

int main() {
    // Declaração e inicialização de uma matriz 3x3 de inteiros
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Imprimir a matriz original
    printf("Matriz Original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Somar todos os elementos da matriz
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    printf("Soma de todos os elementos: %d\n", soma);

    // Multiplicar cada elemento da matriz por 2
    printf("Matriz Multiplicada por 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] *= 2;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
