#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	double med1, med2, med3, maior;	
	
	printf("\nDigite a primeira medida: ");
	scanf("%lf", &med1);
	
	printf("\nDigite a segunda medida: ");
	scanf("%lf", &med2);
	
	printf("\nDigite a terceira medida: ");
	scanf("%lf", &med3);	
	
	if (med1 >= med2 && med1 >= med3){
		maior = med1;
	}
	if (med2 >= med1 && med2 >= med3){
		maior = med2;
	}
	if (med3 >= med1 && med3 >= med2){
		maior = med3;
	}	
	 	
	printf("\nA maior medida apresentada foi: %lf", maior);
	
	return 0;
	
}
