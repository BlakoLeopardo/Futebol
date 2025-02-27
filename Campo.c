#include <stdio.h>
#include <stdlib.h>
#include "Campo.h"

void initField(char field[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            field[i][j] = ' ';
        }
    }
}

void drawField(char field[ROWS][COLS]) {
#ifdef _WIN32
    system("cls");  // Limpa a tela no Windows (para Unix, use "clear")
#else
    system("clear");
#endif
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            putchar(field[i][j]);
        }
        putchar('\n');
    }
}