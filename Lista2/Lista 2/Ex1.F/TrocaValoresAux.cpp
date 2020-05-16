#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	
	
	double num1, num2, aux;
	
	printf("\nDigite o valor do primeiro numero: ");
	scanf("%lf", &num1);
	
	printf("\nDigite o valor do segundo numero: ");
	scanf("%lf", &num2);
	
	printf("\nOs numeros na ordem digitacao sao: %lf e %lf!", num1, num2);
	
	if (num1 != num2){
		
	aux = num1;
	num1 = num2;
	num2 = aux;
	
	printf("\nLogo, invertendo-os teremos: %lf e %lf!", num1, num2);
}else {
	printf("\nOs numeros digitados sao iguais, logo, estando em ordem ou invertidos, a sequencia sera a mesma!");
}

	return 0;	
	
}
