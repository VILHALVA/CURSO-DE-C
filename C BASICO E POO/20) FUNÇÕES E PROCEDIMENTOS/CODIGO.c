#include <stdio.h>
#include <stdlib.h>

// Função para calcular a média de um conjunto de números
float calcularMedia(int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return (float)soma / tamanho;
}

// Função para calcular a mediana de um conjunto de números
float calcularMediana(int numeros[], int tamanho) {
    // Primeiro, ordenamos o array de números
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Se o tamanho do conjunto de números for ímpar, a mediana é o valor do meio
    if (tamanho % 2 != 0) {
        return numeros[tamanho / 2];
    }
    // Se o tamanho for par, a mediana é a média dos dois valores do meio
    else {
        return (float)(numeros[tamanho / 2 - 1] + numeros[tamanho / 2]) / 2;
    }
}

// Função para calcular a moda de um conjunto de números
int calcularModa(int numeros[], int tamanho) {
    int moda = numeros[0];
    int contagemModa = 1;
    int contagemAtual = 1;

    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] == numeros[i - 1]) {
            contagemAtual++;
        } else {
            contagemAtual = 1;
        }

        if (contagemAtual > contagemModa) {
            contagemModa = contagemAtual;
            moda = numeros[i];
        }
    }

    return moda;
}

int main() {
    int tamanho;
    printf("Informe o tamanho do conjunto de numeros: ");
    scanf("%d", &tamanho);

    int *numeros = (int *)malloc(tamanho * sizeof(int));

    printf("Informe os numeros do conjunto:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &numeros[i]);
    }

    float media = calcularMedia(numeros, tamanho);
    float mediana = calcularMediana(numeros, tamanho);
    int moda = calcularModa(numeros, tamanho);

    printf("Media: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);

    free(numeros);

    return 0;
}
