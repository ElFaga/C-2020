#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
	
	double sb, inss, ir, sl;
	int ht, numd;
	char nome[350];
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("\n");
	
	printf("Digite o numero de horas trabalhadas: ");
	scanf("%d", &ht);
	
	if (ht <= 0){
		printf("\n");
		printf("\nHoras invalidas");
		printf("\n");
		return 0;
	}
	
	printf("\n");
	printf("Digite o numero de dependentes que voce possui: ");
	scanf("%d", &numd);
	
	if (numd < 0){
		printf("\n");
		printf("Numero de dependentes invalido!");
		printf("\n");
		return 0;
	}
	
	sb = (12 * ht) + (40 * numd);
	inss = 0.085 * sb;
	ir = 0.05 * sb;
	sl = sb - (inss + ir);
	
	printf("\n");
	puts(nome);
	printf("Seu salario bruto eh: R$%lf!", sb);
	printf("\n");
	printf("Serao descontados: R$%lf para o INSS!", inss);
	printf("\n");
	printf("Serao descontados: R$%lf para o IR!", ir);
	printf("\n");
	printf("Seu salario liquido eh: R$%lf", sl);
	printf("\n");
	
	return 0;
	
}
