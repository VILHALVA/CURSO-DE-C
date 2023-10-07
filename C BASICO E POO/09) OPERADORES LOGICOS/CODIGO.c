#include <stdio.h>

int main() {
    int idade;
    int anos_de_experiencia;

    // Solicitar ao usuário que insira idade e anos de experiência
    printf("Por favor, insira sua idade: ");
    scanf("%d", &idade);

    printf("Agora, insira o número de anos de experiência de trabalho: ");
    scanf("%d", &anos_de_experiencia);

    // Verificar a elegibilidade com base em critérios
    if (idade >= 25 && anos_de_experiencia >= 5) {
        printf("Você é elegível para a posição de gerente sênior.\n");
    } else if (idade >= 20 && anos_de_experiencia >= 3) {
        printf("Você é elegível para a posição de gerente júnior.\n");
    } else {
        printf("Você não atende aos critérios de elegibilidade.\n");
    }

    return 0;
}
