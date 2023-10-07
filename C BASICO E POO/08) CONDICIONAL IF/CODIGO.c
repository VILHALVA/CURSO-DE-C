#include <stdio.h>

int main() {
    int numero, i;
    int ehPrimo = 1; // Assumimos que o número é primo por padrão

    // Solicitar ao usuário que insira um número inteiro
    printf("Por favor, insira um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Verificar se o número é menor ou igual a 1
    if (numero <= 1) {
        ehPrimo = 0; // Números menores ou iguais a 1 não são primos
    } else {
        // Verificar divisibilidade por números de 2 até a metade do número
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                // Se for divisível por algum número, não é primo
                ehPrimo = 0;
                break; // Não é necessário continuar verificando
            }
        }
    }

    // Exibir o resultado
    if (ehPrimo) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0;
}
