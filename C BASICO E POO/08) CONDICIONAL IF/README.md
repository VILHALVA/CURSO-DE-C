# ESTRUTURA CONDICONAL
O comando `if` é uma estrutura de controle condicional em linguagem C que permite que você execute um bloco de código se uma condição for avaliada como verdadeira (diferente de zero) e, opcionalmente, execute um bloco alternativo de código se a condição for avaliada como falsa (igual a zero). A estrutura geral do comando `if` é a seguinte:

```c
if (condicao) {
    // Bloco de código a ser executado se a condição for verdadeira
} else {
    // Bloco de código a ser executado se a condição for falsa (opcional)
}
```

Aqui estão os principais pontos a serem considerados ao usar o comando `if` em C:

1. **Avaliação da Condição**: A condição é uma expressão que é avaliada como verdadeira ou falsa. Se a condição for verdadeira, o bloco de código dentro do `if` é executado. Caso contrário, o bloco de código dentro do `else` (se presente) é executado.

2. **Blocos de Código**: Os blocos de código são delimitados por chaves `{}` e podem conter uma ou várias instruções. É importante usar chaves mesmo que haja apenas uma instrução no bloco. Isso evita erros de ambiguidade e torna o código mais legível.

3. **Opcionalidade do Bloco `else`**: O bloco `else` é opcional. Você pode usar apenas o `if` se não precisar de um bloco alternativo para a condição falsa.

4. **Aninhamento de `if`**: Você pode aninhar múltiplos comandos `if` dentro de outros comandos `if` ou `else` para criar estruturas condicionais mais complexas.

Aqui está um exemplo simples de uso do comando `if` em C:

```c
#include <stdio.h>

int main() {
    int numero;

    printf("Por favor, insira um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero inserido e positivo.\n");
    } else if (numero < 0) {
        printf("O numero inserido e negativo.\n");
    } else {
        printf("O numero inserido e zero.\n");
    }

    return 0;
}
```

Neste exemplo:

- Solicitamos ao usuário que insira um número inteiro.
- Usamos uma estrutura `if` para verificar se o número é positivo, negativo ou zero e exibir uma mensagem correspondente.

Lembre-se de que o comando `if` é uma parte fundamental da programação em C e é usado para controlar o fluxo do programa com base em condições específicas. Você pode usá-lo para criar programas mais complexos com lógica condicional.