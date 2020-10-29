#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 5;
    printf("%d\n", doubleInt(a));
    printf("%d", a);
}

int doubleInt(int a){
   a*=2;
   return a;
}
