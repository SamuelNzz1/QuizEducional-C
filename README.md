# Quiz Educacional em C

Este projeto é uma aplicação de console em C que simula um quiz educacional com perguntas de múltipla escolha. O quiz abrange várias perguntas relacionadas a temas educacionais, com uma interface simples que usa manipulação de console para apresentar perguntas e coletar respostas do usuário.

## Funcionalidades

- **Interface de usuário interativa**: Uso de limpeza de tela e manipulação de cores para melhorar a experiência do usuário.
- **Perguntas de múltipla escolha**: Perguntas com várias opções e resposta única correta.
- **Feedback imediato**: O usuário recebe feedback imediato após cada resposta, indicando se está correta ou errada.
- **Controle de tempo**: Cada pergunta deve ser respondida dentro de um limite de tempo específico.

## Tecnologias Utilizadas

- **Linguagem C**: Utilizado para toda a lógica do programa.
- **Biblioteca Conio.h**: Utilizada para manipulações de console como limpar a tela e mudar cores de texto, proporcionando uma interface de usuário dinâmica.
- **Windows.h**: Biblioteca específica do Windows utilizada para funções como `Sleep`.

## Pré-requisitos

Para executar este projeto, é necessário que o ambiente de desenvolvimento suporte a compilação de código C com as bibliotecas mencionadas. Em sistemas Windows, é recomendado o uso do MinGW ou similar.

### Instalando a biblioteca Conio.h

A biblioteca `conio.h` é específica do DOS/Windows e pode não estar disponível em ambientes Linux/Mac sem uma substituição ou emulação apropriada. Certifique-se de que seu ambiente de desenvolvimento suporta essa biblioteca antes de prosseguir.

## Compilação e Execução

1. Abra o terminal ou prompt de comando no diretório do projeto.
2. Compile o projeto com o seguinte comando:
   ```bash
   gcc -o quiz quiz.c -lconio
