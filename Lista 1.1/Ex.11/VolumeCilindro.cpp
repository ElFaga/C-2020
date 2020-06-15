#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>


int main(){
	
	double  alt, raio, vol;
	
	printf("\nDigite a altura do cilindro: ");
	scanf("%lf", &alt);
	
	printf("\nDigite o raio do cilindro: ");
	scanf("%lf", &raio);
	
	if (alt <= 0 || raio <= 0){
		printf("\nForam inseridos valores invalidos");
		return 0;
	}else{
		
		vol = 3.14 * raio * raio * alt;
		
		system("pause");
		printf("\nO volume deste cilindro eh: %lf", vol);
		
	}
	
	
	return 0;
	
}
