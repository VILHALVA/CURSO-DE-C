# LAÇO DE REPETIÇÃO WHILE
O comando `while` é uma estrutura de loop/laço condicional em C que permite executar um bloco de código repetidamente enquanto uma condição especificada for verdadeira (diferente de zero). O `while` é útil quando você precisa repetir uma ação até que uma determinada condição seja atendida. Aqui está a estrutura básica do comando `while`:

```c
while (condicao) {
    // Bloco de código a ser executado enquanto a condição for verdadeira
}
```

Aqui estão os principais pontos a serem observados sobre o comando `while`:

1. **Condição**: A condição é uma expressão lógica que é avaliada antes de cada execução do bloco de código. Se a condição for verdadeira, o bloco de código é executado; caso contrário, a execução do loop é encerrada.

2. **Inicialização**: Certifique-se de inicializar qualquer variável usada na condição antes de entrar no loop `while`. Caso contrário, o comportamento do loop pode ser imprevisível.

3. **Controle**: Você é responsável por controlar a lógica dentro do loop para garantir que a condição seja eventualmente falsa. Caso contrário, você pode criar um loop infinito.

4. **Incremento/Decremento**: Muitas vezes, você usará um contador ou variável de controle dentro do loop para controlar quantas vezes ele é executado. É comum incrementar ou decrementar essa variável dentro do bloco de código do loop.

Aqui está um exemplo simples de um loop `while` que imprime números de 1 a 5:

```c
#include <stdio.h>

int main() {
    int contador = 1; // Inicializa um contador

    while (contador <= 5) { // Condição
        printf("%d\n", contador); // Imprime o valor do contador
        contador++; // Incrementa o contador
    }

    return 0;
}
```

Neste exemplo, o loop `while` executa o bloco de código repetidamente enquanto a variável `contador` for menor ou igual a 5. O contador é incrementado a cada iteração para evitar um loop infinito.

Os loops `while` são muito úteis em situações em que você precisa realizar uma ação repetidamente com base em uma condição dinâmica. Certifique-se de que a condição seja controlada adequadamente para evitar loops infinitos e sempre inicialize suas variáveis antes de usá-las em uma condição `while`.