# MANUAL
## 1. INSTALAÇÃO DO COMPILADOR C
Para desenvolver em C, você precisa de um compilador. Um dos mais populares é o GCC (GNU Compiler Collection).

### WINDOWS:
1. Baixe e instale o MinGW (Minimalist GNU for Windows) acessando o [site do MinGW](https://sourceforge.net/projects/mingw/).
2. Execute o instalador e siga as instruções para instalar o `gcc`.
3. Durante a instalação, selecione "mingw32-gcc-g++" e "msys-base" para instalar o GCC e o MSYS.
4. Adicione o diretório `bin` do MinGW ao PATH:
   - Abra o Painel de Controle.
   - Vá em Sistema e Segurança > Sistema > Configurações avançadas do sistema.
   - Clique em "Variáveis de Ambiente".
   - Em "Variáveis do sistema", encontre a variável `Path`, clique em "Editar" e adicione o caminho do diretório `bin`, por exemplo, `C:\MinGW\bin`.

Para verificar se a instalação foi bem-sucedida, abra o Prompt de Comando e execute:
```sh
gcc --version
```

### MACOS:
1. Instale o Xcode Command Line Tools, que inclui o GCC. Abra o Terminal e execute:
   ```sh
   xcode-select --install
   ```
2. Siga as instruções na tela para completar a instalação.

Para verificar se a instalação foi bem-sucedida, abra o Terminal e execute:
```sh
gcc --version
```

### LINUX:
1. Abra um terminal.
2. Execute os seguintes comandos para instalar o GCC:
   ```sh
   sudo apt update
   sudo apt install build-essential
   ```

Para verificar se a instalação foi bem-sucedida, abra um terminal e execute:
```sh
gcc --version
```

## 2. CONFIGURAÇÃO DA IDE (INTEGRATED DEVELOPMENT ENVIRONMENT):
Usar uma IDE facilita muito o desenvolvimento em C. Algumas das IDEs mais populares são Code::Blocks e Visual Studio Code.

### CODE::BLOCKS:
1. Acesse o [site do Code::Blocks](http://www.codeblocks.org/downloads/).
2. Baixe o instalador adequado para o seu sistema operacional.
3. Durante a instalação, selecione a opção que inclui o GCC (apenas para Windows).
4. Siga as instruções na tela para concluir a instalação.

### VISUAL STUDIO CODE:
1. Baixe e instale o Visual Studio Code no [site oficial](https://code.visualstudio.com/).
2. Abra o Visual Studio Code.
3. Instale as extensões C/C++:
   1. Clique no ícone de Extensões no lado esquerdo.
   2. Pesquise por "C/C++" e instale a extensão oficial da Microsoft.

## 3. CRIANDO O PRIMEIRO PROJETO EM C:
### PASSO A PASSO PARA CRIAR UM PROJETO NO CODE::BLOCKS:
1. Abra o Code::Blocks.
2. Clique em "File" > "New" > "Project".
3. Selecione "Console Application" e clique em "Go".
4. Siga as instruções do assistente, selecione "C" como a linguagem e nomeie seu projeto.
5. Selecione o diretório onde o projeto será salvo e clique em "Finish".

### CRIANDO UM ARQUIVO C:
1. No painel do lado esquerdo, clique com o botão direito na pasta do projeto.
2. Selecione "New File" > "C Source File".
3. Nomeie o arquivo como `main.c` e clique em "Create".

### ESCREVENDO O CÓDIGO:
No arquivo `main.c` que foi criado, escreva o seguinte código:
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### EXECUTANDO O PROJETO NO CODE::BLOCKS:
1. Clique no ícone de execução (um triângulo verde) na barra de ferramentas superior ou pressione `F9`.
2. O console do Code::Blocks irá abrir e mostrar a mensagem `Hello, World!`.

### PASSO A PASSO PARA CRIAR UM PROJETO NO VISUAL STUDIO CODE:
1. Abra o Visual Studio Code.
2. Clique em "File" > "Open Folder" e selecione ou crie uma pasta para seu projeto.
3. No painel do lado esquerdo, clique com o botão direito na pasta aberta e selecione "New File".
4. Nomeie o arquivo como `main.c` e clique em "OK".

### ESCREVENDO O CÓDIGO:
No arquivo `main.c`, escreva o seguinte código:
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### COMPILANDO E EXECUTANDO O PROJETO NO VISUAL STUDIO CODE:
1. Abra o terminal integrado no Visual Studio Code (View > Terminal).
2. No terminal, certifique-se de que está no diretório do projeto.
3. Compile o código usando o GCC:
   ```sh
   gcc main.c -o hello
   ```
4. Execute o programa compilado:
   ```sh
   ./hello
   ```

Você verá a mensagem `Hello, World!` impressa no terminal.

## CONCLUSÃO:
Agora você tem o GCC instalado e configurado, além de um ambiente de desenvolvimento C pronto com o Code::Blocks ou Visual Studio Code. Você criou e executou seu primeiro projeto C. A partir daqui, você pode explorar mais sobre a linguagem C, bibliotecas e frameworks para expandir suas habilidades de programação.