# CONDICIONAL IF ELSE
Dominar os comandos `if` e `else` em C é fundamental, pois eles são usados para controlar o fluxo do programa com base em condições lógicas. Aqui estão os conceitos essenciais e diretrizes para usar essas estruturas de controle de forma eficaz:

**Comando `if`:**
- O comando `if` é usado para executar um bloco de código se uma condição for avaliada como verdadeira (diferente de zero).
- A estrutura básica é: 
  ```c
  if (condicao) {
      // Bloco de código a ser executado se a condição for verdadeira
  }
  ```
- Você pode usar qualquer expressão lógica como condição. Se a condição for verdadeira, o bloco dentro das chaves será executado.
- Se a condição for falsa, o bloco dentro do `if` não será executado.

Exemplo:
```c
int numero = 10;
if (numero > 5) {
    printf("O numero e maior que 5.\n");
}
```

**Comando `else`:**
- O comando `else` é usado em conjunto com o `if` para especificar um bloco de código que será executado quando a condição do `if` for falsa.
- A estrutura é:
  ```c
  if (condicao) {
      // Bloco de código a ser executado se a condição for verdadeira
  } else {
      // Bloco de código a ser executado se a condição for falsa
  }
  ```
- O bloco dentro do `else` é opcional. Se você não precisar de um bloco alternativo, pode omiti-lo.

Exemplo:
```c
int numero = 3;
if (numero > 5) {
    printf("O numero e maior que 5.\n");
} else {
    printf("O numero nao e maior que 5.\n");
}
```

**Aninhamento de `if` e `else`:**
- Você pode aninhar múltiplos comandos `if` e `else` para criar estruturas condicionais mais complexas.
- Certifique-se de usar chaves `{}` para delimitar os blocos de código, especialmente quando há aninhamento, para evitar erros de ambiguidade.

Exemplo de aninhamento:
```c
int numero = 6;
if (numero > 5) {
    printf("O numero e maior que 5.\n");
    if (numero % 2 == 0) {
        printf("E tambem e par.\n");
    } else {
        printf("E impar.\n");
    }
} else {
    printf("O numero nao e maior que 5.\n");
}
```

Dominar o uso dos comandos `if` e `else` é fundamental para tomar decisões em programas C e controlar o fluxo de execução com base em condições lógicas. Praticar com exemplos e entender a lógica por trás das condições é a chave para utilizá-los eficazmente.