#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
	
	double a, r;
	
	printf("\nDigite o raio: ");
	scanf("%lf", &r);
	
	a = (3.14 * r);
	
	if (r <= 0){
		printf("\nNao foi possivel calcular a area, pois nao ha como o raio da circunferencia ser negativo");
	} else {
		printf("\nO raio digitado foi: %lf e a area da circunferencia sera: %lf", r, a);
	}
}
