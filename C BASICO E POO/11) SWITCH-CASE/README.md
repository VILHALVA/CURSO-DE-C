# SWITCH-CASE 
O comando `switch-case` é uma estrutura de controle de fluxo em C que permite selecionar uma das várias alternativas com base no valor de uma expressão. É uma alternativa mais limpa e eficiente do que uma série de instruções `if-else if-else` quando você precisa tomar decisões com base em um valor específico.

A estrutura geral do `switch-case` é a seguinte:

```c
switch (expressao) {
    case valor1:
        // Código a ser executado se a expressao == valor1
        break;
    case valor2:
        // Código a ser executado se a expressao == valor2
        break;
    // Mais casos...
    default:
        // Código a ser executado se nenhum caso anterior for correspondido
}
```

Aqui estão os principais pontos a serem observados sobre o `switch-case`:

1. **Expressão**: A expressão é avaliada e o resultado é comparado com os valores em cada caso.

2. **Cases**: Os casos (`case`) são rótulos que indicam o código a ser executado se a expressão for igual a um valor específico. Cada caso deve ser único.

3. **Break**: Após a execução de um caso, o `break` é usado para sair do `switch` e evitar que os casos subsequentes sejam executados. Se o `break` não for usado, os casos subsequentes serão executados até encontrar um `break` ou o final do `switch`.

4. **Default**: O bloco `default` é opcional e é executado quando nenhum dos casos corresponde à expressão. É semelhante ao `else` em uma estrutura `if-else`.

Aqui está um exemplo simples de um `switch-case` que determina o dia da semana com base em um número de 1 a 7:

```c
#include <stdio.h>

int main() {
    int dia;
    
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Numero invalido\n");
    }

    return 0;
}
```

Neste exemplo, o usuário digita um número de 1 a 7, e o programa usa o `switch-case` para determinar o dia da semana correspondente. O bloco `default` trata o caso em que o número não corresponde a nenhum dos casos válidos.

O comando `switch-case` é útil quando você precisa tomar decisões com base em uma única expressão que pode corresponder a vários valores diferentes.