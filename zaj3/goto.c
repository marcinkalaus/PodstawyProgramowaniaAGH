#include <stdio.h>

int main(void) {
char word[20] = "liczenie";
int litery;
int i = 1;

start: if (word[i] == '\0'){
	goto stop;
} else {
	goto zwieksz;
}

zwieksz: ++i;
goto start;

stop: printf("Iloœæ liter: %d\n", i);
}

