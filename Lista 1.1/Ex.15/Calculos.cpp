#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
	
	double a, b, c, r, s, som1, som2, d;
	
	printf("Digite o valor de A: ");
	scanf("%lf", &a);
	
	if (a <= 0){
		printf("\n");
		printf("Valor invalido!");
		printf("\n");
		return 0;
	}
	
	printf("\n");
	
	printf("Digite o valor de B: ");
	scanf("%lf", &b);
	
	if (b <= 0){
		printf("\n");
		printf("Valor invalido!");
		printf("\n");
		return 0;
	}
	
	printf("\n");
	
	printf("Digite o valor de C: ");
	scanf("%lf", &c);
	
	if (c <= 0){
		printf("\n");
		printf("Valor invalido!");
		printf("\n");
		return 0;
	}
	
	som1 = a + b;
	som2 = b + c;
	
	r = pow (som1, 2);
	s = pow (som2, 2);
	
	printf("R eh igual a: %lf", r);
	printf("\n");
	printf("S eh igual a: %lf", s);
	
	d = (r + s) / 2;
	
	printf("\n");
	printf("D eh igual a: %lf", d);
	
	return 0;	
	
}
