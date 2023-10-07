#include <stdio.h>

int main() {
    // Declaração e inicialização de um vetor de inteiros
    int numeros[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    // Imprimir todos os elementos do vetor
    printf("Elementos do vetor numeros: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Acessar um elemento específico do vetor
    int terceiro_elemento = numeros[2];
    printf("Terceiro elemento do vetor: %d\n", terceiro_elemento);

    // Procurar por um valor específico no vetor
    int valor_procurado = 12;
    int encontrado = 0;
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == valor_procurado) {
            encontrado = 1;
            break; // Se encontrado, sair do loop
        }
    }
    if (encontrado) {
        printf("O valor %d foi encontrado no vetor.\n", valor_procurado);
    } else {
        printf("O valor %d nao foi encontrado no vetor.\n", valor_procurado);
    }

    // Modificar elementos do vetor
    numeros[4] = 100; // Altera o quinto elemento (índice 4) para 100

    // Imprimir o vetor após a modificação
    printf("Elementos do vetor numeros depois da modificacao: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
