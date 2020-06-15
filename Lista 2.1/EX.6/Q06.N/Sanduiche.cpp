#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int qtd;
	double fatq, fatp, rham;	
	
	printf("Digite a quantidade de sanduiches a serem feitos: ");
	scanf("%d", &qtd);
	
	if (qtd <= 0){
		printf("Digite uma quantidade valida!");
		return 0;
	}
	
	fatq = qtd * 0.1;
	fatp = qtd * 0.05;
	rham = qtd * 0.1;
	
	printf("Para fazer %d sanduiches serao precisos: %lf kg de queijo, %lf kg de presunto e %lf kg de hamburger!", qtd, fatq, fatp, rham);
	
	return 0;
}
