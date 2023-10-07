#include <stdio.h>

int main() {
    int limite;
    long long int termo1 = 0, termo2 = 1, proximoTermo;

    printf("Digite o limite para a sequencia de Fibonacci: ");
    scanf("%d", &limite);

    printf("Sequencia de Fibonacci ate %d:\n", limite);

    // Inicialmente, termo1 e termo2 sao os primeiros dois termos da sequencia
    printf("%lld, %lld, ", termo1, termo2);

    // Calcula e exibe os termos subsequentes da sequencia ate atingir o limite
    while (termo1 + termo2 <= limite) {
        proximoTermo = termo1 + termo2;
        printf("%lld, ", proximoTermo);
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    printf("\n");

    return 0;
}
