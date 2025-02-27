#include <stdlib.h>
#include "Boneco.h"

Boneco* createBoneco(int row, int col, char symbol) {
    Boneco* b = malloc(sizeof(Boneco));
    if (b) {
        b->row = row;
        b->col = col;
        b->symbol = symbol;
    }
    return b;
}

void moveBoneco(Boneco* boneco, char direction, int maxRows, int maxCols) {
    if (!boneco)
        return;

    switch(direction) {
        case 'w': case 'W':
            if (boneco->row > 0)
                boneco->row--;
            break;
        case 's': case 'S':
            if (boneco->row < maxRows - 1)
                boneco->row++;
            break;
        case 'a': case 'A':
            if (boneco->col > 0)
                boneco->col--;
            break;
        case 'd': case 'D':
            if (boneco->col < maxCols - 1)
                boneco->col++;
            break;
        default:
            break;
    }
}

void freeBoneco(Boneco* boneco) {
    free(boneco);
}
