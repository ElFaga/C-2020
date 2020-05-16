#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
	
	
	double num;
	
	printf("\nDigite um numero: ");
	scanf("%lf", &num);
	
	printf("\nO numero digitado foi: %lf", num);
	if (num >= 100 && num <= 1000) {
		printf("\nEste numero pertence ao intervalo de 100 a 1000");
	} else {
		printf("\nEste numero nao pertence ao intervalo de 100 a 1000");
	}	
	
	return 0;
}
