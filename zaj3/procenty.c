#include <stdio.h>

int main(void) {
float a,b,c;

printf("Podaj ile zainwestowa�e�\n");
scanf("%f", &a);
printf("Podaj kwot� zwr�con�\n");
scanf("%f", &b);
printf("Podaj ilo�� miesi�cy\n");
scanf("%f", &c);

printf("Zysk/strata: %.2f%%\n", ((b-a)/a)*100);
printf("Zysk/strata na miesiac: %.2f%%", (((b-a)/a)*100)/c);
}
