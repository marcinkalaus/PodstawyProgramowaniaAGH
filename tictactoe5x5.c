#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char gameboard[5][5];
const char PLAYER_SIGN = 'X';
const char PLAYER2_SIGN = 'O';
int field;
int row;
int column;

void prepareGameboard(){
    int fieldNumber = 1;
    char fieldNumberTwoDigits;
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            gameboard[i][j] = ' ';
        }
    }
    fieldNumber++;
}

void printGameboard(){
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            if(i == 0 && j == 0) printf("---------------------\n");
            printf("| %c ", gameboard[i][j]);
            if(j == 4) printf("|");
            }
        printf("\n---------------------\n");
    }
}

int getUserMove(){
    printf("Make your move\n");
    scanf(" %d %d", &row, &column);

    if (gameboard[row-1][column-1] == ' '){
        gameboard[row-1][column-1] = PLAYER_SIGN;
        return 0;
    } else {
        printf("Make valid move!\n");
        getUserMove();
    }
}

int getUser2Move(){
    printf("Make your move\n");
    scanf(" %d %d", &row, &column);

    if (gameboard[row-1][column-1] == ' '){
        gameboard[row-1][column-1] = PLAYER2_SIGN;
        return 0;
    } else {
        printf("Make valid move!\n");
        getUser2Move();
    }
}

/*
int getComputerMove(){
    char playerMove;
    playerMove = (char)((rand() % 9) + 1)+48;

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(playerMove == gameboard[i][j]){
                gameboard[i][j] = COMP_SIGN;
                return 0;
            }
        }
    }
    getComputerMove();
}
*/

void judge(char gameboard[5][5]){
    for(int i = 0; i < 2; ++i){
        switch(i){
            case 0:
                field = 'X';
                break;

            case 1:
                field = 'O';
                break;
        }

    for (int i = 0; i < 5; ++i) {
        if(
           //horizontally
           (gameboard[i][0] == field && gameboard[i][1] == field && gameboard[i][2] == field && gameboard[i][3] == field && gameboard[i][4] == field) ||


           //vertically
           (gameboard[0][i] == field && gameboard[1][i] == field && gameboard[2][i] == field && gameboard[3][i] == field && gameboard[4][i] == field) ||


           //skew
           (gameboard[0][0] == field && gameboard[1][1] == field && gameboard[2][2] == field && gameboard[3][3] == field && gameboard[4][4] == field) ||
           (gameboard[4][0] == field && gameboard[3][1] == field && gameboard[2][2] == field && gameboard[1][4] == field && gameboard[0][5] == field))
           {
              if (field == 'X'){
                printGameboard();
                printf("Player 1 won!");
                exit(0);
              } else {
                printGameboard();
                printf("Player 2 won!");
                exit(0);
              }
           }
    }
}
}

void startGame(){
    prepareGameboard();

    for(int i = 0; i < 13; ++i){
        printGameboard();
        getUserMove();
        judge(gameboard);
        printGameboard();

        while(i == 12){
                printGameboard();
            printf("Draw!");
            exit(0);
        }
        //getComputerMove();
        getUser2Move();
        judge(gameboard);
    }
}

int main(){

    startGame();
    return 0;
}
