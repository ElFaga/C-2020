#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int cat1, cat2;
	double hip;	
	
	printf("\nDigite o valor do primeiro cateto: ");
	scanf("%d", &cat1);
	
	printf("\nDigite o valor do segundo cateto: ");
	scanf("%d", &cat2);
	
	if(cat1 <= 0 || cat2 <= 0){
		printf("\nOs catetos nao podem ser negativos ou nulos!");
	}else{
	hip = sqrt ((cat1*cat1) + (cat2*cat2));
	
	printf("\nO valor da hipotenusa eh: %lf", hip);
	}
	
	
	return 0;
}
