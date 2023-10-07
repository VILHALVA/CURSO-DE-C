# VARIAVEIS E DADOS
Em linguagem C, as variáveis são locais de armazenamento de dados que você pode usar em seus programas. Cada variável possui um nome e um tipo de dados associado, que define que tipo de valores podem ser armazenados nela. A atribuição de dados é o processo de armazenar um valor em uma variável usando o operador `=`.

Aqui está uma explicação detalhada sobre variáveis e a atribuição de dados em C:

**Declaração de Variáveis:**

Antes de usar uma variável em C, você precisa declará-la. A declaração de uma variável informa ao compilador o nome da variável e seu tipo de dados. A forma geral de declarar uma variável é a seguinte:

```c
tipo_de_dados nome_da_variavel;
```

Por exemplo, para declarar uma variável inteira chamada `idade`, você faria o seguinte:

```c
int idade;
```

Isso informa ao compilador que estamos declarando uma variável chamada `idade` que pode armazenar valores inteiros.

**Atribuição de Dados:**

A atribuição de dados é o processo de armazenar um valor em uma variável. Isso é feito usando o operador de atribuição `=`. A sintaxe geral para atribuição de dados é a seguinte:

```c
nome_da_variavel = valor;
```

Por exemplo, para atribuir o valor 25 à variável `idade`, você faria o seguinte:

```c
idade = 25;
```

Agora, a variável `idade` contém o valor 25.

**Exemplo Completo:**

Aqui está um exemplo completo que declara e atribui valores a algumas variáveis em C:

```c
#include <stdio.h>

int main() {
    // Declaração de variáveis
    int idade;
    float altura;
    char inicial;

    // Atribuição de dados
    idade = 30;
    altura = 1.75;
    inicial = 'J';

    // Exibição dos valores das variáveis
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Inicial: %c\n", inicial);

    return 0;
}
```

Neste exemplo:

- Declaramos três variáveis: `idade` (int), `altura` (float) e `inicial` (char).
- Atribuímos valores a essas variáveis usando o operador `=`. Por exemplo, `idade = 30` atribui o valor 30 à variável `idade`.
- Usamos a função `printf` para exibir os valores das variáveis na saída padrão.

A atribuição de dados é uma operação fundamental em C, permitindo que você armazene e manipule informações em suas variáveis para realizar tarefas específicas em seus programas.