# LAÇO FOR
Claro, o comando `for` é uma estrutura de loop/laço contado em C que é especialmente útil quando você sabe quantas vezes deseja executar um bloco de código. A estrutura geral do `for` é a seguinte:

```c
for (inicializacao; condicao; incremento/decremento) {
    // Bloco de código a ser executado em cada iteração
}
```

Aqui estão os principais componentes do comando `for`:

1. **Inicialização**: A inicialização é geralmente onde você declara e/ou inicializa uma variável de controle do loop. Isso geralmente é feito apenas uma vez, no início do loop.

2. **Condição**: A condição é uma expressão lógica que é verificada antes de cada iteração do loop. Se a condição for verdadeira (diferente de zero), o bloco de código é executado; caso contrário, o loop é encerrado.

3. **Incremento/Decremento**: O incremento ou decremento é usado para modificar a variável de controle após cada iteração do loop. Isso permite que você controle o número de iterações.

Aqui está um exemplo simples de um loop `for` que imprime os números de 1 a 5:

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    printf("\n"); // Pula para uma nova linha
    return 0;
}
```

Neste exemplo:

- Inicializamos a variável `i` com 1 antes de entrar no loop.
- A condição `i <= 5` é verificada antes de cada iteração.
- O incremento `i++` incrementa `i` em 1 após cada iteração.

O resultado desse programa será a impressão dos números de 1 a 5. O comando `for` é uma estrutura de loop eficiente quando você sabe quantas vezes deseja repetir um bloco de código.