#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
	
	double pfab, rev, imp, pf;
	char autom[350];
	
	printf("Digite o nome do automovel: ");
	gets (autom);
	
	printf("\n");
	
	printf("Digite o preco de fabrica: ");
	scanf("%lf", &pfab);
	
	printf("\n");
	
	if (pfab > 0){
	
		rev = pfab * 0.28;
		imp = pfab * 0.45;
		pf = pfab + rev + imp;
		
		printf("O carro: "); puts(autom); 
		printf("Tem preco final de: R$%lf", pf);

		return 0;
	
	}
	
	if (pfab <= 0){
		printf("\n");
		printf("\nValor invalido!");
		printf("\n");
		return 0;
	}

	return 0;
}
