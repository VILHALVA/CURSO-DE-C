# BREAK E CONTINUE
Os comandos `break` e `continue` são utilizados para controlar o fluxo de execução de loops em C, como o `for`, `while` e `do-while`. Eles permitem que você influencie o comportamento de um loop de maneira específica.

1. **`break`**:
   - O comando `break` é usado para interromper imediatamente a execução de um loop quando uma determinada condição é atendida.
   - Quando o `break` é acionado dentro de um loop, o programa sai do loop e continua com a execução do código após o loop.
   - É útil quando você deseja sair de um loop com base em uma condição particular.

Aqui está um exemplo de uso do `break` para sair de um loop `for` quando um valor específico é encontrado:

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Valor 5 encontrado. Saindo do loop.\n");
            break;
        }
        printf("%d ", i);
    }

    return 0;
}
```

Neste exemplo, o loop `for` imprimirá os números de 1 a 4, e quando `i` se tornar igual a 5, o `break` será acionado, e o programa sairá do loop.

2. **`continue`**:
   - O comando `continue` é usado para pular a iteração atual de um loop e continuar com a próxima iteração.
   - Quando o `continue` é acionado dentro de um loop, o restante do código dentro do loop após o `continue` não é executado, e o loop passa para a próxima iteração.
   - É útil quando você deseja ignorar uma iteração específica com base em uma condição.

Aqui está um exemplo de uso do `continue` para pular a iteração quando `i` é igual a 5:

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Ignorando a iteracao quando i=5.\n");
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
```

Neste exemplo, o loop `for` imprimirá todos os números de 1 a 10, exceto quando `i` for igual a 5, onde a iteração é ignorada devido ao `continue`.

Ambos `break` e `continue` são ferramentas úteis para controlar o fluxo de execução em loops, permitindo que você tome decisões com base em condições específicas durante a execução do loop.