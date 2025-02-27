#ifdef BONEQUINHAHH_H
#define BONEQUINHAHH_H

// Estrutura para representar um boneco/jogador
typedef struct
{
int row;
int col;
char symbol;
} Jog;

// Cria um novo boneco, inicializando sua posição e símbolo
Jog* createBone(int row, int col, char symbol);

// Atualiza a posição do boneco conforme a tecla pressionada
// 'direction' pode ser 'W', 'A', 'S', 'D' (maiúsculas ou minúsculas)
// 'maxRows' e 'maxCols' são os limites do campo para evitar sair da área
void moveBone(Jog* boneco, char direc, int maxRows, int maxCols);

// Libera a memória alocada para o boneco
void Oruam(Boneco* boneco);

#endif
