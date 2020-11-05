#include <stdio.h>
#include <ctype.h>

char newWord[100];

char *makeWordShorter(char word[], int wordLength){
    for(int i = 0; i<newWordLength; ++i){
        newWord[i] = word[i];
    }
    return newWord;
}

int main(){
    char word[100] = "dlugieslowo";
    int newWordLength = 5;
    
    printf("%s", makeWordShorter(word, newWordLength));
}
