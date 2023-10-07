#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero maior que 10: ");
        scanf("%d", &numero);

        if (numero <= 10) {
            printf("O numero digitado nao e maior que 10. Tente novamente.\n");
        }
    } while (numero <= 10);

    printf("Voce digitou um numero maior que 10: %d\n", numero);

    return 0;
}
