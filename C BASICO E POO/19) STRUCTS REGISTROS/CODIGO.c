#include <stdio.h>
#include <string.h>

// Definição da struct Pessoa
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

// Função para imprimir os detalhes de uma pessoa
void imprimirPessoa(struct Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d anos\n", p.idade);
    printf("Altura: %.2f metros\n", p.altura);
}

int main() {
    // Declaração e inicialização de variáveis do tipo Pessoa
    struct Pessoa pessoa1 = {"Alice", 28, 1.65};
    struct Pessoa pessoa2 = {"Bob", 35, 1.75};
    struct Pessoa pessoa3;

    // Atribuição de valores aos membros da pessoa3
    strcpy(pessoa3.nome, "Carlos");
    pessoa3.idade = 42;
    pessoa3.altura = 1.80;

    // Imprimir informações sobre as pessoas
    printf("Informações sobre a Pessoa 1:\n");
    imprimirPessoa(pessoa1);

    printf("\nInformações sobre a Pessoa 2:\n");
    imprimirPessoa(pessoa2);

    printf("\nInformações sobre a Pessoa 3:\n");
    imprimirPessoa(pessoa3);

    // Criar um array de pessoas
    struct Pessoa pessoas[3];
    pessoas[0] = pessoa1;
    pessoas[1] = pessoa2;
    pessoas[2] = pessoa3;

    printf("\nInformações sobre as Pessoas no Array:\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        imprimirPessoa(pessoas[i]);
        printf("\n");
    }

    return 0;
}
