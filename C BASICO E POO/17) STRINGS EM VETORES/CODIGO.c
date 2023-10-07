#include <stdio.h>
#include <string.h>

int main() {
    // Declaração e inicialização de strings
    char nome[] = "Joao";
    char sobrenome[50];
    strcpy(sobrenome, "Silva");

    // Concatenando strings
    char nomeCompleto[100];
    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    // Imprimindo strings
    printf("Nome: %s\n", nome);
    printf("Sobrenome: %s\n", sobrenome);
    printf("Nome Completo: %s\n", nomeCompleto);

    // Comprimento de strings
    printf("Comprimento do nome: %lu\n", strlen(nome));
    printf("Comprimento do sobrenome: %lu\n", strlen(sobrenome));
    printf("Comprimento do nome completo: %lu\n", strlen(nomeCompleto));

    // Comparando strings
    if (strcmp(nome, sobrenome) == 0) {
        printf("Nome e sobrenome sao iguais.\n");
    } else {
        printf("Nome e sobrenome sao diferentes.\n");
    }

    // Encontrando caracteres em strings
    char busca = 'o';
    char *posicao = strchr(nome, busca);
    if (posicao != NULL) {
        printf("'%c' encontrado na posicao %ld do nome.\n", busca, posicao - nome);
    } else {
        printf("'%c' nao encontrado no nome.\n", busca);
    }

    // Substituindo uma substring
    char frase[] = "O rato roeu a roupa.";
    char *substituicao = strstr(frase, "roeu");
    if (substituicao != NULL) {
        strncpy(substituicao, "comeu", 5);
        printf("Frase modificada: %s\n", frase);
    }

    return 0;
}
