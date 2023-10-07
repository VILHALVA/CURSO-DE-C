# COMEÇANDO - INTRODUÇÃO E INSTALAÇÃO
## INTRODUÇÃO:
A linguagem de programação C é uma das linguagens mais influentes e amplamente utilizadas na história da computação. Ela foi criada por Dennis Ritchie no Laboratório Bell da AT&T nos Estados Unidos, durante o início da década de 1970. Aqui estão alguns pontos-chave sobre a linguagem C:

### História:
- A linguagem C foi desenvolvida como uma evolução da linguagem B, criada por Ken Thompson no Laboratório Bell. C é considerada a linguagem sucessora de B, com melhorias significativas.

- Dennis Ritchie e sua equipe trabalharam no desenvolvimento da linguagem C para torná-la mais portável e flexível, com o objetivo de criar um sistema operacional chamado "Unix" em C. Isso permitiu que o Unix fosse facilmente portado para diferentes plataformas de hardware.

- Em 1972, Ritchie publicou um artigo descrevendo a linguagem C e, ao longo dos anos, a linguagem evoluiu e ganhou popularidade rapidamente.

### Características:
- C é uma linguagem de programação de alto nível que fornece um conjunto relativamente pequeno de instruções primitivas, o que a torna eficiente e portável.

- Ela oferece recursos de programação estruturada, como loops, condicionais e funções, que facilitam a organização e manutenção de código.

- C é uma linguagem de programação de baixo nível no sentido de que permite acesso direto à memória do computador, o que a torna poderosa para programação de sistemas e aplicativos de baixo nível.

- Ela é compilada, o que significa que o código-fonte em C é traduzido para código de máquina executável por um compilador antes da execução.

### Usos Comuns:
- Sistemas Operacionais: A linguagem C desempenhou um papel fundamental no desenvolvimento de sistemas operacionais, incluindo o próprio Unix e sistemas Unix-like, como Linux e macOS.

- Programação de Sistemas: C é amplamente usado para desenvolver software de sistema, drivers de hardware e outras aplicações que interagem diretamente com o hardware do computador.

- Aplicações de Tempo Real: Devido à sua eficiência e previsibilidade, a linguagem C é usada em sistemas de controle e outras aplicações de tempo real.

- Aplicações Desktop: Embora não seja tão comum como em décadas passadas, C ainda é usado para desenvolver aplicativos desktop, especialmente quando é necessário alto desempenho.

- Jogos: Muitos jogos de computador, especialmente jogos de baixo nível, são desenvolvidos em C ou C++.

- Embarcados: C é amplamente utilizado no desenvolvimento de firmware para dispositivos embarcados, como microcontroladores e sistemas embarcados em geral.

- Compiladores e Linguagens de Programação: Muitos compiladores de outras linguagens são escritos em C, tornando-o uma linguagem "lingua franca" para o desenvolvimento de compiladores e interpretadores.

### Legado e Impacto:
A linguagem C teve um impacto duradouro na indústria de software e serviu como base para muitas outras linguagens de programação, como C++, C#, Objective-C e muitas outras. Seu legado continua influenciando o design de linguagens de programação até hoje.

Em resumo, a linguagem C é uma linguagem de programação histórica e influente, conhecida por sua eficiência, portabilidade e poder. Embora tenha evoluído ao longo dos anos, continua sendo uma escolha popular para desenvolvimento de sistemas, programação de baixo nível e muitos outros domínios de aplicação.

## INSTAÇÃO:
Para programar em C no Visual Studio Code, você precisará seguir algumas etapas para configurar o ambiente de desenvolvimento. Aqui estão os passos básicos para instalar o compilador C e configurar o Visual Studio Code:

1. **Instale um compilador C:**

   Você precisará de um compilador C para compilar e executar seus programas em C. Um dos compiladores populares é o GCC (GNU Compiler Collection). Você pode instalá-lo em sistemas Unix-like (Linux e macOS) usando um gerenciador de pacotes, como `apt` no Ubuntu ou `brew` no macOS. No Windows, você pode usar o MinGW (Minimalist GNU for Windows) ou instalar o GCC através do MSYS2.

   - **Linux (Ubuntu):**
     ```
     sudo apt-get update
     sudo apt-get install gcc
     ```

   - **macOS (Homebrew):**
     ```
     brew update
     brew install gcc
     ```

   - **Windows (MinGW):**
     Você pode baixar e instalar o MinGW seguindo as instruções em https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/.

2. **Instale o Visual Studio Code:**

   Se você ainda não tem o Visual Studio Code instalado, pode fazer o download e instalá-lo a partir do site oficial: https://code.visualstudio.com/.

3. **Instale a extensão C/C++ para o Visual Studio Code:**

   Abra o Visual Studio Code e vá para a seção de extensões (clique no ícone de extensões na barra lateral à esquerda ou use o atalho `Ctrl+Shift+X`). Pesquise por "C/C++" e instale a extensão fornecida pela Microsoft.

4. **Crie um novo projeto ou arquivo C:**

   - Para criar um novo projeto, você pode usar uma estrutura de gerenciamento de projetos como o CMake. A configuração do CMake pode ser feita no Visual Studio Code usando a extensão "CMake Tools".

   - Para criar um arquivo C simples, vá para o Visual Studio Code, crie um novo arquivo com a extensão `.c` (por exemplo, `meuprograma.c`) e comece a escrever seu código C.

5. **Configurar o ambiente de compilação:**

   Se você estiver usando o GCC ou outro compilador, configure o ambiente de compilação no Visual Studio Code. Para fazer isso, você pode criar um arquivo `tasks.json` na raiz do seu projeto ou usar as configurações padrão. O Visual Studio Code deve detectar automaticamente o compilador C instalado no seu sistema.

   Exemplo de `tasks.json`:
   ```json
   {
       "version": "2.0.0",
       "tasks": [
           {
               "label": "build",
               "type": "shell",
               "command": "gcc",
               "args": [
                   "-o",
                   "meuprograma",
                   "meuprograma.c"
               ],
               "group": {
                   "kind": "build",
                   "isDefault": true
               },
               "problemMatcher": "$gcc"
           }
       ]
   }
   ```

6. **Compilar e Executar:**

   Agora você pode compilar e executar seu programa C diretamente no Visual Studio Code. Basta abrir o arquivo `.c`, clicar com o botão direito do mouse e escolher "Build" ou "Run" nas opções disponíveis.

7. **Depuração (opcional):**

   O Visual Studio Code também oferece suporte à depuração de programas em C. Você pode configurar pontos de interrupção e usar a funcionalidade de depuração para rastrear e solucionar problemas em seu código.

Isso deve ajudá-lo a configurar um ambiente de desenvolvimento para programação em C no Visual Studio Code. Lembre-se de que você pode personalizar ainda mais as configurações para atender às suas necessidades específicas à medida que se torna mais familiarizado com a ferramenta.