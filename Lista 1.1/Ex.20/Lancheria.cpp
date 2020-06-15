#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
	
	int cod, qtd, op;
	double valor;
	
	do{
	
	printf("Digite o codigo: ");
	scanf("%d", &cod);
	
	if (cod < 100 || cod > 105){
		printf("\n");
		printf("Codigo invalido!");
		printf("\n");
	}
	
	printf("\n");
	
	printf("Digite a quantidade: ");
	scanf("%d", &qtd);
	
	if (qtd <= 0){
		printf("\n");
		printf("Quantidade invalida!");
		printf("\n");
	}
	
	printf("\n");
	
	system("pause");
	
	if (cod == 100){
		printf("\n");
		valor = qtd * 1.2;
		printf("O valor a ser pago eh: R$%lf", valor);
		printf("\n");
	}
	
	if (cod == 101){
		printf("\n");
		valor = qtd * 1.3;
		printf("O valor a ser pago eh: R$%lf", valor);
	}
	
	if (cod == 102){
		printf("\n");
		valor = qtd * 1.5;
		printf("O valor a ser pago eh: R$%lf", valor);
	}
	
	if (cod == 103){
		printf("\n");
		valor = qtd * 1.2;
		printf("O valor a ser pago eh: R$%lf", valor);		
	}
	
	if (cod == 104){
		printf("\n");
		valor = qtd * 1.3;
		printf("O valor a ser pago eh: R$%lf", valor);		
	}
	
	if (cod == 105){
		printf("\n");
		valor = qtd * 1;
		printf("O valor a ser pago eh: R$%lf", valor);
	}
	
	printf("\n");
	printf("Digite 1 para processar outro pedido ou outro numero para encerrar!");
	printf("\n");
	
	printf("\n");
	printf("Resposta: ");
	scanf("%d", &op);
	
	printf("\n"); 
	
	} while (op == 1);
	
	return 0;	
}
