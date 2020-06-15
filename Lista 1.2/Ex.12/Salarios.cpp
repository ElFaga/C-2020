#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	
	double sal, salmin, qtd;
	
	printf("\nInforme o valor de um salario minimo: ");
	scanf("%lf", &salmin);
	
	printf("\nInforme o valor de um salario: ");
	scanf("%lf", &sal);
	
	qtd = (sal/salmin);
	
	printf("\nDentro do salario informado, estao contidos %lf salarios minimos!", qtd);

	return 0;
	
}
