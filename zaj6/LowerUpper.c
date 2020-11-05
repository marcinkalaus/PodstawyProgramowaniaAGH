#include <stdio.h>
#include <ctype.h>

char *lowerUpper(char word[]){
    for(int i = 0; i<word[i]; ++i){
        if (isupper(word[i])){
            word[i] = tolower(word[i]);
        } else {
            word[i] = toupper(word[i]);
        }
    }
    return word;
}

int main(){
    char word[100] = "Cos";
    printf("%s", lowerUpper(word));
}
