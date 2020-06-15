#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
	
	double n1, n2, n3, n4, med;
	int op;
	
	do{
	
	
	do{
	
	printf("Digite a primeira nota: ");
	scanf("%lf", &n1);
	
	if (n1 < 0 || n1 > 10){
		printf("\n");
		printf("Digite uma nota valida!");
		printf("\n");
	}
	
	printf("\n");
	
	} while (n1 < 0 || n1 > 10);
	
	do {
		
		printf("Digite a segunda nota: ");
		scanf("%lf", &n2);
		
		if (n2 < 0 || n2 > 10){
			printf("\n");
			printf("Digite uma nota valida!");
			printf("\n");
		}
		
		printf("\n");
		
	} while (n2 < 0 || n2 > 10);
	
	do {
		
		printf("Digite a terceira nota: ");
		scanf("%lf", &n3);
		
		if (n3 < 0 || n3 > 10){
			printf("\n");
			printf("Digite uma nota valida!");
			printf("\n");
		}
		
		printf("\n");
		
	} while (n3 < 0 || n3 > 10);
	
	do {
		
		printf("Digite a quarta nota: ");
		scanf("%lf", &n4);
		
		if (n4 < 0 || n4 > 10){
			printf("\n");
			printf("Digite uma nota valida!");
			printf("\n");
		}
		
		printf("\n");
		
	} while (n4 < 0 || n4 > 10);
	
	med = (n1 + n2 + n3 + n4) / 4;
	
	printf("Sua media anual eh: %lf", med);
	printf("\n");
	
	if (med < 6){
		printf("\n");
		printf("O aluno esta reprovado, estude mais!");
		printf("\n");
	}
	
	if (med >= 6){
		printf("\n");
		printf("O aluno esta aprovado, parabens!");
		printf("\n");
	}
	
	
	printf("\n");
	printf("Digite 1 para calcular outra media ou outro numero para encerrar o processo!");
	printf("\n");
	printf("\n");
	printf("Resposta: ");
	scanf("%d", &op);
	printf("\n");
	
	} while (op == 1);
	
	return 0;	
	
}
