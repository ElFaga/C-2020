#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
	
	
	double num;	
	
	printf("\nDigite um numero: ");
	scanf("%lf", &num);
	
	printf("\nO numero digitado foi: %lf", num);
	
	if (num >= 0 && num <= 20) {
		printf("\nEle pertence ao intervalo A - de 0 ate 20 -.");
	}
	if (num >= -5 && num <= -1) {
		printf("\nEle pertence ao intervalo B - de -5 ate -1 -.");
	}
	if (num >= 21 && num <= 60) {
		printf("\nEle pertence ao intervalo C - de 21 ate 60 -.");
	}
	if (num >= -100 && num <= 15) {
		printf("\nEle pertence ao intervalo D - de -100 ate 15 -.");
	}
	if (num < -100 || num > 60){
		printf("\nEste numero nao pertence a nenhum intervalo predefinido!");
	}
	
	return 0;
}
