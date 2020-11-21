#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char newTab[100] = "";
char *polacz(char *tab1[], int length){

    for(int i = 0; i < 3; ++i){
        strcat(newTab, tab1[i]);
    }
    return newTab;
}

int main(){
    char *tab1[3] = {"To","sa","slowa"};
    int length = sizeof(tab1)/sizeof(tab1[0]);
    printf("%s", polacz(tab1, length));
    return 0;
}
