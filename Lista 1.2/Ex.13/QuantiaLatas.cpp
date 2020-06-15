#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
	
	double h, r, area, val, valt, qtd, medl;
	
	printf("Digite a altura do cilindro: ");
	scanf("%lf", &h);
	
	if (h <= 0){
		printf("\n");
		printf("Altura invalida!");
		printf("\n");
		return 0;
	}
	
	printf("\n");
	
	printf("Digite o raio do cilindro: ");
	scanf("%lf", &r);
	
	printf("\n");
	
	if (r <= 0){
		printf("\n");
		printf("Raio invalido!");
		printf("\n");
		return 0;
	}
	
	area = 2 * 3.14 * r * (r + h);
	
	printf("Este cilindro possui %lf metros quadrados!", area);
	printf("\n");
	
	val = 34.2;
	medl = 5 * 3;
	qtd = area / medl;
	valt = qtd * val;
	
	printf("\n");
	printf("Voce precisara de: %lf latas de tinta", qtd);
	
	printf("\n");
	
	printf("\n");
	printf("E isso custara: R$%lf", valt);
	
	printf("\n");
	
	return 0;	
}
