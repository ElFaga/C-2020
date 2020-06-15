#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
	
	int a, m, d;
	
	printf("Digite a quantidade de anos: ");
	scanf("%d", &a);
	
	if (a < 0){
		printf("\n");
		printf("Valor invalido!");
		printf("\n");
		return 0;
	}
	
	printf("Digite a quantidade de meses: ");
	scanf("%d", &m);
	
	if (m < 0){
		printf("\n");
		printf("Valor invalido!");
		printf("\n");
		return 0;
	}
	
	printf("Digite a quantidade de dias: ");
	scanf("%d", &d);
	
	if (d < 0){
		printf("\n");
		printf("Valor invalido!");
		printf("\n");
		return 0;
	}
	
	d = (d + (a * 360) + (m * 30));
	
	printf("\nVoce tem %d dias de vida!", d);
	
	return 0;
}
