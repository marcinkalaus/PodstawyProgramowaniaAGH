#include <stdio.h>

int main(void) {
printf("Piosenka radiotelegrafisty\n");
printf("Wybierz syna\n");
int i;
scanf("%d", &i);

switch(i){
	case 1:
	printf("Titata\n");
	break;
	case 2:
	printf("Tititata\n");
	break;
	case 3:
	printf("Poszed� do ��czno�ci\n");
	break;
	default:
	printf("Nie by�o takiego syna");
	}
}
