#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int	lado, per, area;
	double diag;
	
	printf("\nDigite o lado do quadrado: ");
	scanf("%d", &lado);
	
	if(lado <= 0){
		
		printf("\nValor invalido!");
		return 0;
		
	} else {
		
		per = (4 * lado);
		area = (lado * lado);
		diag = (lado * sqrt(2));
		
		system ("pause");
		
		printf("\nPara um quadrado de lado igual a: %d, temos que", lado);
		printf("\nSeu perimetro equivale a: %d, sua area equivale a: %d e sua diagonal equivale a: %lf", per, area, diag);
		
	}
	
	return 0;
}
