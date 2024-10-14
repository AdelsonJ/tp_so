#ifndef ESTRUTURADADOS_H_INCLUDED
#define ESTRUTURADADOS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_BLOCKED 100   // Define o número máximo de processos bloqueados
#define MAX_FINISHED 100  // Define o número máximo de processos finalizados

// Estrutura para representar um processo simulado
typedef struct {
    int id;               // Identificador único do processo
    int var;              // Valor da variável inteira associada ao processo
    int contP;            // Contador de programa (índice da próxima instrução a ser executada)
    char **programa;      // Vetor de strings representando o programa (conjunto de instruções)
    int tamProg;          // Tamanho do programa (número de instruções)
    int bloqueio;         // Indicador de bloqueio (se o processo está bloqueado)
    int completo;         // Indica se o processo foi finalizado
    int tempo_inicio;     // Indica o tempo em que o processo inicia
} ProcessoSimulado;

// Estrutura para gerenciar os processos simulados
typedef struct {
    int tempo_gasto;              // Tempo total gasto na execução dos processos
    int contador_processo;        // Contador de processos (número total de processos gerenciados)
    int *processos_finalizados;   // Array de IDs de processos finalizados
    int *processos_bloqueados;    // Array de IDs de processos bloqueados
    ProcessoSimulado **processos;           // Array de ponteiros para todos os processos
    ProcessoSimulado **processos_espera;    // Array de ponteiros para processos em espera
    ProcessoSimulado *processo_execucao;    // Ponteiro para o processo atualmente em execução
} Gerenciador;

#endif
