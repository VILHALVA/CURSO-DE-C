#include <stdio.h>

int main() {
    // Exibir uma mensagem simples
    printf("Exemplo de uso da funcao printf em C\n");

    // Exibir variáveis de diferentes tipos
    int idade = 25;
    double salario = 3500.50;
    char genero = 'M';
    char nome[] = "Joao";

    printf("Nome: %s\n", nome);        // Exibir uma string
    printf("Idade: %d anos\n", idade); // Exibir um inteiro
    printf("Salario: %.2f\n", salario); // Exibir um ponto flutuante
    printf("Genero: %c\n", genero);     // Exibir um caractere

    // Exibir números em formatos diferentes
    int numeroDecimal = 100;
    int numeroHexadecimal = 0x64;
    int numeroOctal = 0144;

    printf("Decimal: %d, Hexadecimal: %x, Octal: %o\n", numeroDecimal, numeroHexadecimal, numeroOctal);

    return 0;
}
