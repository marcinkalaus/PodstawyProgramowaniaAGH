#include <stdlib.h>
#include <stdio.h>

int main(){
    int tab[10];
    int suma = 0;

    FILE *fp;
    fp = fopen ("10liczb.txt", "r");

    if( fp == NULL ){
        perror("błąd otwarcia pliku");
        exit(1);
    }

    for(int i=0; i<10; ++i){
        fscanf(fp, "%d", &tab[i]);
        suma += tab[i];
    }

    printf("Srednia: %d", suma/(sizeof(tab)/sizeof(tab[0])));
    fclose (fp);

    return 0;
}
