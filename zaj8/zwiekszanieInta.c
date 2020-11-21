#include <stdio.h>

int zwiekszInt(void* liczba){
    return *(int*)liczba += 1;
}

int main(){

    struct lista{
    int a;
    int b;
    };

    struct lista *wsk;
    wsk = (struct lista*) malloc(sizeof(struct lista));

    (*wsk).a = 5;
    (*wsk).b = 2;

    printf("%d", zwiekszInt(((int*)wsk)+1));

return 0;
}
