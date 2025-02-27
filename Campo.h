#ifndef CAMPO_H
#define CAMPO_H

// Define as dimensões do campo
#define ROWS 120
#define COLS 90

// Inicializa o campo (preenche com espaços em branco)
void initField(char field[ROWS][COLS]);

// Desenha o campo no console
void drawField(char field[ROWS][COLS]);

#endif