#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main (){
	
	
	int	raio;
	double per, area;
	
	printf("\nDigite o valor do raio: ");
	scanf("%d", &raio);
	
	if (raio <= 0){
		printf("\nValor invalido!");
		return 0;
	} else {
		per = 2 * 3.14 * raio;
		area = 3.14 * (raio * raio);
		printf("\nPara um raio de valor: %d", raio);
		printf("\nTemos que seu perimetro equivale a: %lf e sua area equivale a: %lf", per, area);
	}

	
	return 0;
	
}
