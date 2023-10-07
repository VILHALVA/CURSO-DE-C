# STRUCTS - REGISTROS
Structs, ou registros, em C são estruturas de dados que permitem agrupar diferentes tipos de variáveis relacionadas sob um único nome. Eles são frequentemente usados para representar objetos ou entidades com várias propriedades diferentes. Aqui estão os conceitos fundamentais sobre structs em C:

## Declaração de uma Struct:
Para declarar uma struct, você precisa definir sua estrutura usando a palavra-chave `struct`, especificar um nome para a struct e listar suas variáveis ou campos (chamados de membros) dentro das chaves `{}`. Por exemplo:

```c
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};
```

## Declaração de Variáveis do Tipo Struct:
Depois de definir uma struct, você pode criar variáveis desse tipo especificando o nome da struct e um nome para a variável. Por exemplo:

```c
struct Pessoa pessoa1; // Declara uma variável do tipo Pessoa chamada pessoa1
```

## Inicialização de Variáveis Struct:
Você pode inicializar uma variável struct usando uma lista de inicialização ou atribuindo valores aos seus membros individualmente. Exemplo:

```c
struct Pessoa pessoa2 = {"Maria", 30, 1.75}; // Inicialização com lista de valores
struct Pessoa pessoa3; // Declaração
strcpy(pessoa3.nome, "João"); // Inicialização dos membros individualmente
pessoa3.idade = 25;
pessoa3.altura = 1.80;
```

## Acesso aos Membros de uma Struct:
Você pode acessar os membros de uma struct usando o operador ponto `.` seguido do nome do membro. Exemplo:

```c
printf("Nome: %s\n", pessoa1.nome);
printf("Idade: %d anos\n", pessoa1.idade);
printf("Altura: %.2f metros\n", pessoa1.altura);
```

## Passagem de Structs para Funções:
Você pode passar structs como argumentos para funções e retorná-las a partir de funções. Isso permite que você trabalhe com estruturas de dados complexas em seu programa.

```c
void exibirPessoa(struct Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d anos\n", p.idade);
    printf("Altura: %.2f metros\n", p.altura);
}
```

## Arrays de Structs:
Você pode criar arrays de structs para armazenar várias instâncias da mesma struct em uma coleção.

```c
struct Pessoa pessoas[3]; // Declara um array de 3 structs Pessoa
pessoas[0] = pessoa1; // Atribui a primeira pessoa
pessoas[1] = pessoa2; // Atribui a segunda pessoa
pessoas[2] = pessoa3; // Atribui a terceira pessoa
```

As structs são uma maneira poderosa de organizar e manipular dados em C, especialmente quando você precisa representar objetos ou registros complexos. Elas permitem que você crie estruturas de dados personalizadas para modelar objetos do mundo real em seu programa.