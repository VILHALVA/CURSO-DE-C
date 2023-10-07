#include <stdio.h>

int main() {
    int opcao;
    float numero1, numero2, resultado;

    printf("Calculadora Simples\n");
    printf("Selecione a operacao:\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("Escolha a opcao (1/2/3/4): ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 4) {
        printf("Digite o primeiro numero: ");
        scanf("%f", &numero1);

        printf("Digite o segundo numero: ");
        scanf("%f", &numero2);

        if (opcao == 1) {
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
        } else if (opcao == 2) {
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
        } else if (opcao == 3) {
            resultado = numero1 * numero2;
            printf("Resultado: %.2f\n", resultado);
        } else if (opcao == 4) {
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero nao permitida.\n");
            }
        }
    } else {
        printf("Opcao invalida. Por favor, escolha uma opcao de 1 a 4.\n");
    }

    return 0;
}
