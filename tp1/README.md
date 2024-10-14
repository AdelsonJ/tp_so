# Simulador de Gerenciamento de Processos

Este projeto é um simulador de gerenciamento de processos que simula a execução de instruções de processos, incluindo bloqueio, desbloqueio, criação de novos processos, e finalização de processos.

## Estrutura do Projeto

- `main.c`: Ponto de entrada do programa, responsável por iniciar o processo gerente e enviar comandos.
- `processManager.h` e `processManager.c`: Definem e implementam o gerenciador de processos e as funções relacionadas.
- `estruturaDados.h` e `estruturaDados.c`: Definem as estruturas de dados utilizadas para representar os processos simulados e o gerenciador de processos.

## Compilação

Para compilar o projeto, utilize o comando `make`:

```bash
make

```

Este comando irá compilar todos os arquivos necessários e gerar o executável main.

## Execução
Para executar o simulador, utilize o comando:

    ./main init

O arquivo init deve conter as instruções iniciais que serão executadas pelo primeiro processo. Certifique-se de preencher corretamente o arquivo init, pois ele é essencial para a execução da primeira instrução do simulador

## Formato do Arquivo 'init'

O arquivo init deve conter uma lista de instruções, uma por linha. As instruções podem ser:

- S <valor>: Define o valor da variável do processo.
- A <valor>: Adiciona o valor à variável do processo.
- D <valor>: Subtrai o valor da variável do processo.
- B: Bloqueia o processo.
- E: Finaliza o processo.
- F <valor>: Cria um novo processo e desvia o contador de programa do processo pai pelo valor especificado.
- R <nome_arquivo>: Substitui o programa do processo com o conteúdo do arquivo especificado.

Exemplo de um arquivo init:

S 10
A 5
B
D 3
E

## Comandos do Simulador

Durante a execução, o simulador aceita os seguintes comandos:

-Q: Executa uma única linha do programa do processo em execução.
- U: Desbloqueia o primeiro processo bloqueado.
- P: Imprime o estado atual do sistema.
- T: Imprime o tempo de retorno médio e finaliza a simulação.
