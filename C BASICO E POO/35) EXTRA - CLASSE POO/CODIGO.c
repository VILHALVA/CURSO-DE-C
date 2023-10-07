#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Simulação de uma classe em C
struct Pessoa {
    char nome[50];
    int idade;
};

// Método construtor
struct Pessoa criarPessoa(const char *nome, int idade) {
    struct Pessoa pessoa;
    strncpy(pessoa.nome, nome, sizeof(pessoa.nome));
    pessoa.idade = idade;
    return pessoa;
}

// Método getter para o atributo "nome"
const char *getNome(const struct Pessoa *pessoa) {
    return pessoa->nome;
}

// Método getter para o atributo "idade"
int getIdade(const struct Pessoa *pessoa) {
    return pessoa->idade;
}

// Método setter para o atributo "idade"
void setIdade(struct Pessoa *pessoa, int novaIdade) {
    pessoa->idade = novaIdade;
}

// Método que simula herança
struct Aluno {
    struct Pessoa base;
    char matricula[10];
};

// Método construtor para Aluno
struct Aluno criarAluno(const char *nome, int idade, const char *matricula) {
    struct Aluno aluno;
    aluno.base = criarPessoa(nome, idade);
    strncpy(aluno.matricula, matricula, sizeof(aluno.matricula));
    return aluno;
}

// Método getter para a matrícula
const char *getMatricula(const struct Aluno *aluno) {
    return aluno->matricula;
}

// Método que simula polimorfismo
void imprimirInfo(const void *objeto) {
    const struct Pessoa *pessoa = objeto;
    printf("Nome: %s\n", getNome(pessoa));
    printf("Idade: %d\n", getIdade(pessoa));
}

int main() {
    // Criação de um objeto Pessoa
    struct Pessoa pessoa1 = criarPessoa("Alice", 30);
    
    // Criação de um objeto Aluno
    struct Aluno aluno1 = criarAluno("Bob", 25, "A12345");

    // Chamada de métodos para obter informações
    printf("Informações da Pessoa:\n");
    imprimirInfo(&pessoa1);

    printf("\nInformações do Aluno:\n");
    imprimirInfo(&aluno1.base);
    printf("Matrícula: %s\n", getMatricula(&aluno1));

    // Chamada de método para modificar a idade
    setIdade(&pessoa1, 31);
    printf("\nNova idade da Pessoa: %d\n", getIdade(&pessoa1));

    return 0;
}
