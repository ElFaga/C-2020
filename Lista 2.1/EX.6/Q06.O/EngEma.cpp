#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	double pesoi, pesof;
	int op;	
	
	printf("Digite seu peso inicial: ");
	scanf("%lf", &pesoi);
	
	if(pesoi <= 0){
		printf("Peso invalido!");
		return 0;
	}
	
	printf("\n");
	printf("0 - Engordou");
	printf("\n1 - Emagreceu");
	printf("\n");
	printf("\nResposta: ");
	scanf("%d", &op);
	
	if (op != 0 && op != 1){
		printf("Opcao invalida!");
		return 0;
	}
	
	if (op == 0){
		pesof = pesoi * 1.15; 
		printf("Seu peso atual eh:%lf", pesof);
		return 0;	
	}
	
	if (op == 1){
		pesof = pesoi * 0.80;
		printf("Seu peso atual eh:%lf", pesof);
		return 0;	
	}	
	
	return 0;
}
