#include <stdio.h>
#include <stdlib.h>
#include "board_print_plain.h"


char** board;


void FillBoard(){
    int i;
    for (i = 0; i < 8; i++){
        board[i][1] = 'P';
        board[i][6] = 'p';
    }
    board[0][0] = 'R';
    board[1][0] = 'N';
    board[2][0] = 'B';
    board[3][0] = 'Q';
    board[4][0] = 'K';
    board[5][0] = 'B';
    board[6][0] = 'N';
    board[7][0] = 'R';
    board[0][7] = 'r';
    board[1][7] = 'n';
    board[2][7] = 'b';
    board[3][7] = 'q';
    board[4][7] = 'k';
    board[5][7] = 'b';
    board[6][7] = 'n';
    board[7][7] = 'r';
}

void InitBoard(){
    int i,j;
    board = (char**)malloc(8 * sizeof(char*));
    for (i = 0; i < 8; i++) {
        board[i] = (char*)malloc(8 * sizeof(char));
        for (j = 0; j < 8; j++) {
            board[i][j] = ' ';
        }
    }
    FillBoard();
}


void ClearBoard(){
    int i;
    for (i = 0; i < 8; i++) {
        free(board[i]);
    }
    free(board);
    board = NULL;
}

void print_board(){

int i,j;

for (i=0; i<8; i++){
    for (j=0; j<8;j++)
      printf("%c",board[j][i]);
    printf("\n");
}
}
