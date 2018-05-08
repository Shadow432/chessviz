#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "board_print_plain.h"
#include "board.h"

static int GetLine(char *buff, size_t sz) {
    int ch, extra;
    if (fgets (buff, sz, stdin) == NULL) {
        return 1;
    }
    if (buff[strlen(buff)-1] != '\n') {
        extra = 0;
        while (((ch = getchar()) != '\n') && (ch != EOF))
            extra = 1;
        return (extra == 1) ? 1 : 0;
    }
    buff[strlen(buff)-1] = '\0';
    return 0;
}



void moves(){
  print_board();
char hag[16];
while (GetLine(hag,sizeof(hag))){}
 printf("%s",hag);

 int l1=hag[0]-'a';
 int d1=hag[1]-'0'-1;
 int l2=hag[3]-'a';
 int d2=hag[4]-'0'-1;
 board[l2][d2]=board[l1][d1];
 board[l1][d1]=' ';
 printf("\n");

}
