# OPERADORES LOGICOS
Em linguagem C, você pode realizar operações lógicas usando operadores lógicos. Os operadores lógicos mais comuns são a disjunção (ou lógico), a conjunção (e lógico) e a negação (não lógico). Vamos entender como cada um deles funciona:

1. **Disjunção (OU Lógico)**: O operador de disjunção é representado por `||`. Ele retorna verdadeiro (`1`) se pelo menos uma das expressões lógicas envolvidas for verdadeira. Caso contrário, retorna falso (`0`).

   Exemplo:
   ```c
   int x = 5;
   int y = 10;
   if (x > 3 || y < 5) {
       printf("Pelo menos uma das condições é verdadeira.\n");
   }
   ```

2. **Conjunção (E Lógico)**: O operador de conjunção é representado por `&&`. Ele retorna verdadeiro (`1`) apenas se todas as expressões lógicas envolvidas forem verdadeiras. Se qualquer uma delas for falsa, o resultado será falso (`0`).

   Exemplo:
   ```c
   int a = 7;
   int b = 8;
   if (a > 5 && b < 10) {
       printf("Ambas as condições são verdadeiras.\n");
   }
   ```

3. **Negação (NÃO Lógico)**: O operador de negação é representado por `!`. Ele inverte o valor de uma expressão lógica. Se a expressão for verdadeira, a negação tornará falsa, e vice-versa.

   Exemplo:
   ```c
   int c = 12;
   if (!(c < 10)) {
       printf("A condição é falsa após a negação.\n");
   }
   ```

Estes operadores lógicos são frequentemente usados em combinação com o comando `if` para criar condições complexas. Por exemplo, você pode usar disjunções e conjunções para criar condições que dependem de várias expressões lógicas ao mesmo tempo.
