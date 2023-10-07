#include <stdio.h>

int main() {
    int inicio, fim, i, j;
    int e_primo;

    printf("Digite o limite inferior do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o limite superior do intervalo: ");
    scanf("%d", &fim);

    printf("Numeros primos no intervalo de %d a %d:\n", inicio, fim);

    for (i = inicio; i <= fim; i++) {
        if (i <= 1) {
            continue; // Ignora números menores ou iguais a 1
        }

        e_primo = 1; // Assumimos que i é primo por padrão

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                e_primo = 0; // i não é primo, saímos do loop interno
                break;
            }
        }

        if (e_primo) {
            printf("%d ", i); // i é um número primo
        }
    }

    printf("\n");
    return 0;
}
