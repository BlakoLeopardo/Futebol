#ifndef BONECO_H
#define BONECO_H

// Estrutura para representar um boneco (jogador)
typedef struct {
    int row;
    int col;
    char symbol;
} Boneco;

// Cria um novo boneco na posição (row, col) com o símbolo definido
Boneco* createBoneco(int row, int col, char symbol);

// Atualiza a posição do boneco conforme a tecla pressionada
// 'direction' pode ser 'W', 'A', 'S' ou 'D' (maiúscula ou minúscula)
void moveBoneco(Boneco* boneco, char direction, int maxRows, int maxCols);

// Libera a memória alocada para o boneco
void freeBoneco(Boneco* boneco);

#endif