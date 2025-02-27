#include <stdlib.h>

#include "Bonequinhahh.h"

Jog* createBone(int row, int col, char symbol)
{
    Jog* b = malloc(sizeof(Jog));

    if (b)
    {
        b->row = row;
        b->col = col;
        b->symbol = symbol; 
    }
    return b;
}

void moveBone(Jog* boneco, char direc, int maxRows, int maxCols)
{
    if (!boneco)
    {
switch(direc) 
{
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
            // Se a tecla não corresponder, não move.
    break;
}
}
void Oruam(Jog* boneco)
{
    free(boneco);
}
}