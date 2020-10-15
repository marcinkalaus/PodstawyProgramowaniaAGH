#include <stdio.h>

int main(void) {
float a,b,c;

printf("Podaj ile zainwestowa³eœ\n");
scanf("%f", &a);
printf("Podaj kwotê zwrócon¹\n");
scanf("%f", &b);
printf("Podaj iloœæ miesiêcy\n");
scanf("%f", &c);

printf("Zysk/strata: %.2f%%\n", ((b-a)/a)*100);
printf("Zysk/strata na miesiac: %.2f%%", (((b-a)/a)*100)/c);
}
