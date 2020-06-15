#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
	
	float n1, n2, n3, med;
	int op;
	
	do{
	
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	if (n1 < 0 || n1 > 10){
		printf("\n");
		printf("Nota invalida!");
		printf("\n");
		return 0;
	}
	
	printf("\n");
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	if (n2 < 0 || n2 > 10){
		printf("\n");
		printf("Nota invalida!");
		printf("\n");
		return 0;
	}
	
	printf("\n");
	
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	if (n3 < 0 || n3 > 10){
		printf("\n");
		printf("Nota invalida!");
		printf("\n");
		return 0;
	}
	
	med = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
	
	printf("\n");
	printf("A media eh:%f", med);
	printf("\n");
	
	printf("\n");
	printf("Digite 1 para fazer outra media ponderada ou outro numero para sair!");
	printf("\n");
	printf("\n");
	printf("Resposta: ");
	scanf("%d", &op);
	printf("\n");
	
} while (op == 1);
		
	return 0;	
}

