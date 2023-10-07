# VETORES E ARRAYS
Vetores, também conhecidos como arrays em C, são estruturas de dados que permitem armazenar múltiplos elementos do mesmo tipo sob um único nome. Eles são úteis para lidar com coleções de dados, como listas de números, strings e outros tipos de informações. Aqui estão os conceitos fundamentais para trabalhar com vetores em C:

## Declaração de um vetor:
Para declarar um vetor, você precisa especificar o tipo dos elementos que ele conterá e o nome do vetor. A sintaxe básica é:

```c
tipo_do_elemento nome_do_vetor[tamanho];
```

Exemplo:

```c
int numeros[5]; // Um vetor de inteiros com tamanho 5
```

## Inicialização de um vetor:
Você pode inicializar um vetor ao declará-lo ou posteriormente, atribuindo valores a seus elementos individualmente ou usando um loop.

Exemplo de inicialização durante a declaração:

```c
int numeros[5] = {1, 2, 3, 4, 5};
```

Exemplo de inicialização posterior:

```c
int numeros[5]; // Declaração
numeros[0] = 1; // Inicialização
numeros[1] = 2;
numeros[2] = 3;
numeros[3] = 4;
numeros[4] = 5;
```

## Acesso aos elementos do vetor:
Você pode acessar os elementos de um vetor usando seu nome seguido pelo índice entre colchetes. Os índices começam em 0 para o primeiro elemento e vão até `tamanho - 1`.

Exemplo:

```c
int terceiro_numero = numeros[2]; // Acessa o terceiro elemento (índice 2) do vetor "numeros"
```

## Iteração através de um vetor:
Você pode usar loops, como `for` ou `while`, para percorrer todos os elementos de um vetor.

Exemplo usando `for`:

```c
int i;
for (i = 0; i < 5; i++) {
    printf("%d ", numeros[i]); // Imprime cada elemento do vetor "numeros"
}
```

## Tamanho de um vetor:
Em C, não há uma função integrada para obter o tamanho de um vetor. Você deve acompanhar o tamanho manualmente ou usar um valor constante para representar o tamanho do vetor.

## Vetores multidimensionais:
Você também pode criar vetores multidimensionais (matrizes) em C, onde você tem várias dimensões (linhas e colunas).

Exemplo de matriz bidimensional (matriz):

```c
int matriz[3][3]; // Uma matriz 3x3 de inteiros
```

Lembre-se de que os vetores em C são de tamanho fixo e estático. Se você precisar de uma coleção de tamanho dinâmico, pode considerar o uso de alocação dinâmica de memória com funções como `malloc` e `free`.

A prática é fundamental para dominar o uso de vetores em C, e você pode explorar muitos exemplos e exercícios para aprimorar suas habilidades com essa estrutura de dados.