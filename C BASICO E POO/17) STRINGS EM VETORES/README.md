# STRINGS EM VETORES
Aqui estão explicações e exemplos revisados que trabalham com strings usando vetores de caracteres em C:

## Declarando e inicializando strings usando vetores de caracteres:

```c
char nome[] = "Joao";      // Inicialização durante a declaração
char sobrenome[50];        // Declaração de um vetor de caracteres
strcpy(sobrenome, "Silva"); // Inicialização posterior usando strcpy
```

- Declaramos `nome` como uma string inicializada durante a declaração.
- Declaramos `sobrenome` como um vetor de caracteres e o inicializamos posteriormente com a função `strcpy`.

## Concatenando strings usando vetores de caracteres:

```c
char nomeCompleto[100];
strcpy(nomeCompleto, nome);        // Copia o conteúdo de nome para nomeCompleto
strcat(nomeCompleto, " ");         // Adiciona um espaço
strcat(nomeCompleto, sobrenome);   // Concatena sobrenome a nomeCompleto
```

- Usamos `strcpy` para copiar `nome` para `nomeCompleto`.
- Usamos `strcat` para adicionar um espaço e depois concatenar `sobrenome` a `nomeCompleto`.

## Imprimindo strings usando `printf`:

```c
printf("Nome: %s\n", nome);
printf("Sobrenome: %s\n", sobrenome);
printf("Nome Completo: %s\n", nomeCompleto);
```

- Utilizamos a formatação `%s` com `printf` para imprimir as strings `nome`, `sobrenome` e `nomeCompleto`.

## Calculando o comprimento de strings usando vetores de caracteres:

```c
printf("Comprimento do nome: %lu\n", strlen(nome));
printf("Comprimento do sobrenome: %lu\n", strlen(sobrenome));
printf("Comprimento do nome completo: %lu\n", strlen(nomeCompleto));
```

- Usamos a função `strlen` para calcular o comprimento de cada string.

## Comparando strings usando vetores de caracteres:

```c
if (strcmp(nome, sobrenome) == 0) {
    printf("Nome e sobrenome sao iguais.\n");
} else {
    printf("Nome e sobrenome sao diferentes.\n");
}
```

- Usamos `strcmp` para comparar as strings `nome` e `sobrenome`.

## Encontrando caracteres em strings usando vetores de caracteres:

```c
char busca = 'o';
char *posicao = strchr(nome, busca);
if (posicao != NULL) {
    printf("'%c' encontrado na posicao %ld do nome.\n", busca, posicao - nome);
} else {
    printf("'%c' nao encontrado no nome.\n", busca);
}
```

- Usamos `strchr` para encontrar a primeira ocorrência do caractere `'o'` em `nome`.

## Substituindo substrings em strings usando vetores de caracteres:

```c
char frase[] = "O rato roeu a roupa.";
char *substituicao = strstr(frase, "roeu");
if (substituicao != NULL) {
    strncpy(substituicao, "comeu", 5); // Substitui "roeu" por "comeu"
    printf("Frase modificada: %s\n", frase);
}
```

- Usamos `strstr` para encontrar a primeira ocorrência da substring "roeu" em `frase`.
- Usamos `strncpy` para substituir "roeu" por "comeu" na `frase`.

Esses exemplos revisados demonstram várias operações comuns de manipulação de strings em C usando vetores de caracteres.
