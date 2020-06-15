#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
	
	int	a, m, d;
	
	printf("Digite a quantidade de dias de vida: ");
	scanf("%d", &d);
	
	if (d < 0){
		printf("\n");
		printf("Valor invalido!");
		printf("\n");
		return 0;
	}
	
	a = d / 360;
	m = (d % 360) / 30;
	d = (d % 360) % 30;
	
	printf("Voce tem %d anos, %d meses e %d dias de vida!", a, m, d);
	
	return 0;	
}
