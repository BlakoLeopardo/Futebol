#include <stdio.h>
#ifdef _WIN32
#include <conio.h>
#endif

#include "Campo.h"
#include "Bonequinhahh.h"

int main(void) 
{
char field[ROWS][COLS];
    initField(field);

    // Cria um boneco (jogador) na posição central do campo
    Boneco* player = createBoneco(ROWS / 2, COLS / 2, 'O');

    // Coloca o boneco no campo
    field[player->row][player->col] = player->symbol;

    // Exibe o campo e as instruções
    drawField(field);
    printf("Use W (cima), A (esquerda), S (baixo) e D (direita) para mover.\n");
    printf("Pressione Q para sair.\n");

    char ch;
    do {
#ifdef _WIN32
        ch = _getch();  // Lê a tecla sem precisar pressionar Enter
#else
        ch = getchar();
#endif
        // Remove o boneco da posição antiga
        field[player->row][player->col] = ' ';

        // Atualiza a posição do boneco com base na tecla pressionada
        moveBoneco(player, ch, ROWS, COLS);

        // Coloca o boneco na nova posição
        field[player->row][player->col] = player->symbol;

        // Atualiza a exibição do campo
        drawField(field);
        printf("Use W (cima), A (esquerda), S (baixo) e D (direita) para mover.\n");
        printf("Pressione Q para sair.\n");
    } while(ch != 'q' && ch != 'Q');

    freeBoneco(player);
    return 0;

}