// Campo.c
#include <stdio.h>
#include <stdlib.h>

#include "Campo.h"

void inicializaCampo(void) {
    int linhas = 120;
    int colunas = 90;
    int **campo;
    
    // Aloca memória para as linhas (array de ponteiros)
    campo = malloc(linhas * sizeof(int *));
    if (campo == NULL) {
        fprintf(stderr, "Erro ao alocar memória para as linhas.\n");
        exit(EXIT_FAILURE);
    }
    
    // Para cada linha, aloca um array de colunas
    for (int i = 0; i < linhas; i++) {
        campo[i] = malloc(colunas * sizeof(int));
        if (campo[i] == NULL) {
            fprintf(stderr, "Erro ao alocar memória para a linha %d.\n", i);
            exit(EXIT_FAILURE);
        }
    }
    
    // Inicializa a matriz, por exemplo, zerando todos os elementos
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            campo[i][j] = 0;
        }
    }
    
    // Exemplo: altera o valor na posição (10,20)
    campo[10][20] = 1;
    printf("Valor em (10,20): %d\n", campo[10][20]);
    
    // Libera a memória alocada
    for (int i = 0; i < linhas; i++) {
        free(campo[i]);
    }
    free(campo);
}