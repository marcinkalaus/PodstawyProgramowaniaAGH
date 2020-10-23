#include<stdio.h>

int main() {
    for (int i=1; i <= 255; ++i){
        char c= i;
        printf("%d: %c \n", i, c);
    }
    return 0;
}
