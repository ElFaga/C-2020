#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main () {

	int num;

	printf("\nDigite um numero: ");
	scanf("%d", &num);

	if (num > 10) {
		printf("\nEste numero eh maior que 10");
	}
	if (num < 10) {
		printf("\nEste numero eh menor que 10");
	}
	if (num = 10) {
		printf("\nEste numero eh igual a 10");
	}

	return 0;
}
