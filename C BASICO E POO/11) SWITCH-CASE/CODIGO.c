#include <stdio.h>

int main() {
    char operacao;
    float numero1, numero2, resultado;

    printf("Calculadora Interativa\n");
    printf("Escolha a operacao:\n");
    printf("1. Soma (+)\n");
    printf("2. Subtracao (-)\n");
    printf("3. Multiplicacao (*)\n");
    printf("4. Divisao (/)\n");
    printf("Escolha a operacao (1/2/3/4): ");
    scanf(" %c", &operacao); // Usamos um espaço antes de %c para consumir a quebra de linha anterior.

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    switch (operacao) {
        case '1':
        case '+':
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '2':
        case '-':
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '3':
        case '*':
            resultado = numero1 * numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '4':
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero nao permitida.\n");
            }
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
