#include <stdio.h>

int main() {
    // Declaração de variáveis
    char nome[50];
    int numeroAluno;
    int numNotas;
    float notas[10]; // Suponhamos que um aluno possa ter até 10 notas
    float media = 0.0;

    // Solicitar informações do aluno
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite o numero do aluno: ");
    scanf("%d", &numeroAluno);

    printf("Quantas notas o aluno possui (maximo 10): ");
    scanf("%d", &numNotas);

    // Ler as notas do aluno
    printf("Digite as notas do aluno:\n");
    for (int i = 0; i < numNotas; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        media += notas[i]; // Adicionar a nota à média
    }

    // Calcular a média das notas
    if (numNotas > 0) {
        media /= numNotas;
    }

    // Exibir informações do aluno e a média
    printf("\nInformacoes do Aluno:\n");
    printf("Nome: %s\n", nome);
    printf("Numero do Aluno: %d\n", numeroAluno);
    printf("Notas do Aluno:\n");
    for (int i = 0; i < numNotas; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }
    printf("Media das Notas: %.2f\n", media);

    return 0;
}
