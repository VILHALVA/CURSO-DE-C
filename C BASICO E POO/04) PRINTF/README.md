# APRENDA A USAR O PRINTF
Em linguagem C, a função `printf` é usada para exibir mensagens ou informações na saída padrão, geralmente no console ou no terminal. Aqui está uma explicação básica de como usar a função `printf` para mostrar mensagens em C:

**Sintaxe da Função `printf`**

A função `printf` tem a seguinte sintaxe básica:

```c
printf(formato, argumentos);
```

- `formato`: Uma string que especifica o formato em que os argumentos serão formatados e exibidos.
- `argumentos`: Os valores que você deseja exibir na saída, que correspondem aos marcadores de formato na string de formato.

**Exemplos Básicos:**

Aqui estão alguns exemplos básicos de como usar o `printf` em C:

1. Exibir uma mensagem simples:
   
   ```c
   printf("Olá, mundo!\n");
   ```

   Neste exemplo, a mensagem "Olá, mundo!" será exibida no console.

2. Exibir uma variável:

   ```c
   int idade = 25;
   printf("Minha idade é %d anos.\n", idade);
   ```

   Neste exemplo, a variável `idade` é exibida na saída usando `%d` como marcador de formato para um inteiro.

3. Exibir números em ponto flutuante:

   ```c
   double preco = 19.99;
   printf("O preço é: %.2f\n", preco);
   ```

   Neste exemplo, a variável `preco` é exibida com duas casas decimais usando `%.2f` como marcador de formato para um número em ponto flutuante.

**Marcadores de Formato Comuns:**

Aqui estão alguns dos marcadores de formato mais comuns que você pode usar com a função `printf` em C:

- `%d`: Inteiro decimal.
- `%f`: Ponto flutuante.
- `%c`: Caractere.
- `%s`: String.
- `%x` ou `%X`: Valor hexadecimal.
- `%o`: Valor octal.

Você pode combinar múltiplos marcadores de formato em uma única string de formato para exibir várias variáveis em uma única chamada `printf`. Por exemplo:

```c
int numero1 = 10;
double numero2 = 3.14159;
char letra = 'A';

printf("Número inteiro: %d, Número em ponto flutuante: %.2f, Caractere: %c\n", numero1, numero2, letra);
```

Este é um exemplo simples de como usar a função `printf` para exibir mensagens e informações na saída padrão em C. Ela é amplamente utilizada para depuração, relatórios e interação com o usuário em programas C.