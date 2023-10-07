# FUNÇÕES E PROCEDIMENTOS
Em C, funções e procedimentos (ou rotinas) são blocos de código que podem ser definidos para executar uma tarefa específica e podem ser chamados em várias partes de um programa. Funções retornam um valor, enquanto procedimentos não retornam nada. Vamos aprender a criar e usar funções e procedimentos em C.

## Criando e Chamando uma Função:
Uma função em C é definida com um cabeçalho que inclui o tipo de retorno, o nome da função e os parâmetros (se houver). Aqui está um exemplo de uma função que soma dois números:

```c
#include <stdio.h>

// Declaração da função
int somar(int a, int b) {
    return a + b;
}

int main() {
    int resultado;

    // Chamando a função
    resultado = somar(5, 3);

    printf("A soma é: %d\n", resultado);

    return 0;
}
```

Neste exemplo:

- Definimos uma função chamada `somar` que recebe dois inteiros como parâmetros e retorna a soma deles.
- Chamamos a função `somar` dentro da função `main` e atribuímos o resultado a uma variável `resultado`.
- Imprimimos o resultado usando `printf`.

## Criando e Chamando um Procedimento:
Um procedimento é semelhante a uma função, mas não retorna um valor. Ele é usado quando você deseja realizar uma ação, mas não precisa de um resultado. Aqui está um exemplo de um procedimento que imprime uma mensagem:

```c
#include <stdio.h>

// Declaração do procedimento
void imprimirMensagem() {
    printf("Olá, mundo!\n");
}

int main() {
    // Chamando o procedimento
    imprimirMensagem();

    return 0;
}
```

Neste exemplo:

- Definimos um procedimento chamado `imprimirMensagem` que não recebe parâmetros e não retorna nada. Ele simplesmente imprime uma mensagem na tela.
- Chamamos o procedimento `imprimirMensagem` dentro da função `main`.

## Passagem de Parâmetros por Valor:
Em C, os parâmetros de uma função são passados por valor, o que significa que uma cópia dos valores é passada para a função. Qualquer modificação feita nos parâmetros dentro da função não afeta as variáveis originais fora da função. Veja um exemplo:

```c
#include <stdio.h>

// Função que duplica um número
int duplicar(int num) {
    num *= 2;
    return num;
}

int main() {
    int numero = 5;
    int resultado;

    resultado = duplicar(numero);

    printf("Número original: %d\n", numero);
    printf("Resultado: %d\n", resultado);

    return 0;
}
```

Neste exemplo, a função `duplicar` recebe um número e retorna o dobro dele. No entanto, a variável `numero` fora da função não é afetada pela modificação dentro da função.

## Passagem de Parâmetros por Referência (Ponteiro):
Para passar parâmetros por referência em C, você pode usar ponteiros. Isso permite que você modifique diretamente os valores das variáveis passadas. Por exemplo:

```c
#include <stdio.h>

// Função que incrementa um número usando ponteiro
void incrementar(int *num) {
    (*num)++;
}

int main() {
    int numero = 5;

    incrementar(&numero);

    printf("Número incrementado: %d\n", numero);

    return 0;
}
```

Neste exemplo, a função `incrementar` recebe um ponteiro para um número e incrementa o valor diretamente usando `(*num)++`. Isso faz com que a variável `numero` seja modificada diretamente dentro da função.

Essas são as noções básicas para criar e usar funções e procedimentos em C. Funções e procedimentos são fundamentais para organizar e reutilizar código em programas C.