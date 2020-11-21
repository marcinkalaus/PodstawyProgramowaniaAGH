#include <stdio.h>
#include <stdlib.h>

char gameboard[3][3];
const char PLAYER_SIGN = 'X';
const char COMP_SIGN = 'O';
int field;

void prepareGameboard(){
    int fieldNumber = 1;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            gameboard[i][j] = (char)fieldNumber+48;
            fieldNumber++;
            }
    }
}

void printGameboard(){
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(i == 0 && j == 0) printf("-------------\n");
            printf("| %c ", gameboard[i][j]);
            if(j == 2) printf("|");
            }
        printf("\n-------------\n");
    }
}

int getUserMove(){
    char playerMove;
    printf("Make your move\n");
    scanf(" %c", &playerMove);

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(playerMove == gameboard[i][j]){
                gameboard[i][j] = PLAYER_SIGN;
                return 0;
            }
        }
    }
    printf("Make valid move!\n");
    getUserMove();
}

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

void judge(char gameboard[3][3]){
    for(int i = 0; i < 2; ++i){
        switch(i){
            case 0:
                field = 'X';
                break;

            case 1:
                field = 'O';
                break;
        }

        if(
           //horizontally
           (gameboard[0][0] == field && gameboard[0][1] == field && gameboard[0][2] == field) ||
           (gameboard[1][0] == field && gameboard[1][1] == field && gameboard[1][2] == field) ||
           (gameboard[2][0] == field && gameboard[2][1] == field && gameboard[2][2] == field) ||

           //vertically
           (gameboard[0][0] == field && gameboard[1][0] == field && gameboard[2][0] == field) ||
           (gameboard[0][1] == field && gameboard[1][1] == field && gameboard[2][1] == field) ||
           (gameboard[0][2] == field && gameboard[1][2] == field && gameboard[2][2] == field) ||

           //skew
           (gameboard[0][0] == field && gameboard[1][1] == field && gameboard[2][2] == field) ||
           (gameboard[2][0] == field && gameboard[1][1] == field && gameboard[0][2] == field))
           {
              if (field == 'X'){
                printGameboard();
                printf("Player won!");
                exit(0);
              } else {
                printGameboard();
                printf("Computer won!");
                exit(0);
              }
           }
    }
}

void startGame(){
    for(int i = 0; i < 5; ++i){
        printGameboard();
        getUserMove();
        while(i == 4){
                printGameboard();
            printf("Draw!");
            exit(0);
        }
        getComputerMove();
        judge(gameboard);
    }
}

int main(){

    prepareGameboard();
    startGame();

    return 0;
}
