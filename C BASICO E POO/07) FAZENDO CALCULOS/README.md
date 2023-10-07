# FAZENDO CALCULOS
## OPERADORES:
Em C, você pode realizar cálculos usando operadores aritméticos, que são símbolos especiais para executar operações matemáticas em variáveis e valores. Os operadores aritméticos mais comuns em C são:

1. **Adição (+)**: Usado para somar valores.
2. **Subtração (-)**: Usado para subtrair valores.
3. **Multiplicação (*)**: Usado para multiplicar valores.
4. **Divisão (/)**: Usado para dividir valores.
5. **Módulo (%)**: Usado para encontrar o resto da divisão entre dois valores inteiros.

Aqui está um exemplo simples que demonstra como realizar cálculos em C:

```c
#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numero1 = 10;
    int numero2 = 5;
    int resultado;

    // Adição
    resultado = numero1 + numero2;
    printf("Adição: %d + %d = %d\n", numero1, numero2, resultado);

    // Subtração
    resultado = numero1 - numero2;
    printf("Subtração: %d - %d = %d\n", numero1, numero2, resultado);

    // Multiplicação
    resultado = numero1 * numero2;
    printf("Multiplicação: %d * %d = %d\n", numero1, numero2, resultado);

    // Divisão
    resultado = numero1 / numero2;
    printf("Divisão: %d / %d = %d\n", numero1, numero2, resultado);

    // Módulo (resto da divisão)
    resultado = numero1 % numero2;
    printf("Módulo: %d %% %d = %d\n", numero1, numero2, resultado);

    return 0;
}
```

Neste exemplo:

- Declaramos duas variáveis inteiras, `numero1` e `numero2`, com os valores 10 e 5, respectivamente.
- Realizamos operações de adição, subtração, multiplicação, divisão e módulo usando os operadores aritméticos.
- Exibimos os resultados usando a função `printf`.

Ao compilar e executar este programa, você verá os resultados das operações aritméticas na saída padrão. Isso ilustra como realizar cálculos simples em C usando operadores aritméticos. Você pode aplicar esses princípios a cálculos mais complexos em seus programas.

## ORDEM DE PRECEDENCIA:
A ordem de precedência, também conhecida como ordem de operações, é uma regra que define a sequência em que as operações matemáticas são realizadas em uma expressão. Em linguagens de programação como C, a ordem de precedência determina qual operação é executada primeiro quando há várias operações em uma única expressão. Isso garante que os cálculos sejam executados de forma consistente e que os resultados sejam precisos.

A ordem de precedência comum em C segue a seguinte hierarquia, do mais alto para o mais baixo:

1. **Parênteses**: Operações dentro de parênteses são sempre executadas primeiro. Por exemplo, `(2 + 3) * 4` resultará em 20, pois a adição dentro dos parênteses é realizada antes da multiplicação.

2. **Multiplicação e Divisão**: Multiplicação (`*`) e divisão (`/`) têm uma precedência maior do que adição (`+`) e subtração (`-`). Isso significa que, em expressões como `2 + 3 * 4`, a multiplicação é realizada antes da adição, resultando em 14.

3. **Adição e Subtração**: Quando não há parênteses, a adição e subtração têm a mesma precedência. Em `2 + 3 - 1`, a adição e subtração são realizadas da esquerda para a direita, resultando em 4.

4. **Atribuições**: As operações de atribuição, como `=` e `+=`, têm uma precedência menor em comparação com operações aritméticas. Isso significa que, em expressões como `x = 5 * y`, a multiplicação é realizada antes da atribuição.

5. **Operadores de Comparação**: Os operadores de comparação, como `==`, `<`, `>`, têm uma precedência menor do que operações aritméticas e atribuições.

6. **Operadores Lógicos**: Operadores lógicos, como `&&` (E lógico) e `||` (OU lógico), geralmente têm a menor precedência.

É importante observar que você pode alterar a ordem de avaliação usando parênteses. Qualquer expressão dentro de parênteses é avaliada primeiro, ignorando a ordem de precedência padrão. Por exemplo:

```c
resultado = (2 + 3) * 4; // Aqui, a adição dentro dos parênteses é realizada primeiro.
```

É uma boa prática usar parênteses para tornar o código mais legível e evitar ambiguidades na ordem de precedência quando necessário. Quando não há parênteses, o C seguirá a ordem de precedência padrão. Portanto, compreender e aplicar corretamente a ordem de precedência é fundamental para escrever códigos precisos e evitar erros de cálculo.