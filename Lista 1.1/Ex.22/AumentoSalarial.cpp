#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
	
	double sa, sn, dif;
	int cod;
	
	printf("Digite seu salario atual: ");
	scanf("%lf", &sa);
	
	if (sa <= 0){
		printf("\n");
		printf("Salario invalido!");
		printf("\n");
		return 0;
	}
	
	do{
		
	printf("\n");
	printf("101 - Gerente");
	printf("\n");
	printf("\n");
	printf("102 - Engenheiro");
	printf("\n");
	printf("\n");
	printf("103 - Tecnico");
	printf("\n");
	printf("\n");
	printf("104 - Outro Cargo");
	printf("\n");
	printf("\n");
	printf("Digite o codigo de acordo com seu cargo!");
	printf("\n");
	printf("\n");
	printf("Resposta: ");
	scanf("%d", &cod);
	printf("\n");
	
	} while (cod < 101 || cod > 104);

	
	if (cod == 101){
		printf("\n");
		sn = sa * 1.1;
		dif = sn - sa;
		printf("Seu salario antigo era: R$%lf, seu salario novo eh: R$%lf, e a diferenca entre eles eh: R$%lf", sa, sn, dif);
		printf("\n");
		return 0;
	}

	if (cod == 102){
		printf("\n");
		sn = sa * 1.2;
		dif = sn - sa;
		printf("Seu salario antigo era: R$%lf, seu salario novo eh: R$%lf, e a diferenca entre eles eh: R$%lf", sa, sn, dif);
		printf("\n");
		return 0;
	}

	if (cod == 103){
		printf("\n");
		sn = sa * 1.3;
		dif = sn - sa;
		printf("Seu salario antigo era: R$%lf, seu salario novo eh: R$%lf, e a diferenca entre eles eh: R$%lf", sa, sn, dif);
		printf("\n");
		return 0;
	}

	if (cod == 104){
		printf("\n");
		sn = sa * 1.4;
		dif = sn - sa;
		printf("Seu salario antigo era: R$%lf, seu salario novo eh: R$%lf, e a diferenca entre eles eh: R$%lf", sa, sn, dif);
		printf("\n");
		return 0;
	}
	
	return 0;
	
}
