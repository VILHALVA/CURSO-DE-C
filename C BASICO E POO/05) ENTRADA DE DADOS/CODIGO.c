#include <stdio.h>

int main() {
    int numero;
    float salario;
    char nome[50];

    // Solicitar ao usuário que insira um número inteiro
    printf("Por favor, insira um numero inteiro: ");
    scanf("%d", &numero);

    // Solicitar ao usuário que insira um número em ponto flutuante
    printf("Agora, insira um salario em ponto flutuante: ");
    scanf("%f", &salario);

    // Solicitar ao usuário que insira uma string (nome)
    printf("Por favor, insira um nome: ");
    scanf("%s", nome);

    // Exibir os valores inseridos pelo usuário
    printf("Voce inseriu:\n");
    printf("Numero inteiro: %d\n", numero);
    printf("Salario em ponto flutuante: %.2f\n", salario);
    printf("Nome: %s\n", nome);

    return 0;
}
