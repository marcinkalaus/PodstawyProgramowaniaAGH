#include <stdio.h>
#include <limits.h>

int main(){

    int tab[] = {1, 2, 4, 256, INT_MAX, 0, -1, INT_MIN};

    FILE *plik = fopen("int.bin","wb");

    fwrite(tab, sizeof(int), (sizeof(tab)/sizeof(tab[0])), plik);

    fclose(plik);
    return 0;
}
