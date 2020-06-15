#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main(){
	
	double delta, x1, x2;
	int a, b, c;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	if (a == 0){
		printf("\n");
		printf("Esta nao eh uma equacao do segundo grau!");
		printf("\n");
		return 0;
	}
	
	printf("\n");
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	if (b == 0){
		printf("\n");
		printf("Esta nao eh uma equacao do segundo grau!");
		printf("\n");
		return 0;
	}
	
	printf("\n");
	
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	
	if (c == 0){
		printf("\n");
		printf("Esta nao eh uma equacao do segundo grau!");
		printf("\n");
		return 0;
	}
	
	printf("\n");
	
	system ("pause");
	
	printf("\n");
	
	delta = (b * b) - (4 * a * c);
	
	if (delta < 0){
		printf("\n");
		printf("Nao ha raizes reais!");
		printf("\n");
		return 0;
	}
	
	if (delta > 0){
		printf("\n");
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
		printf("O delta dessa equacao eh: %lf", delta);
		
		printf("\n");
		
		printf("\n");
		
		printf("As raizes desta equacao sao: x1 = %lf e x2 = %lf", x1, x2);
		return 0;
	}
	
	if (delta == 0){
		printf("\n");
		x1 = (-b + sqrt(delta)) / 2 * a;
		printf("O delta dessa equacao eh: %lf", delta);
		printf("\n");
		printf("Esta equacao tem uma raiz: x1 = %lf", x1);
		return 0;
	}	
	
	return 0;	
	
}
