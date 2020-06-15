#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int base, alt, per, area;
	double diag;
	
	printf("\nDigite o valor da base do retangulo: ");
	scanf("%d", &base);
	
	if(base <= 0){
		printf("\nA base nao pode ser nula ou negativa!");
		return 0;
	} else{
		printf("\nDigite o valor da altura do retangulo: ");
		scanf("%d", &alt);
		if (alt <= 0){
			printf("\nA altura nao pode ser nula ou negativa!");
		} else {
			
			per = 2 * (alt + base);
			area = alt * base;
			diag = sqrt((base * base) + (alt * alt));
			
			system ("pause");
			
			printf("\nPara um retangulo cuja base equivale a: %d, e sua altura equivale a: %d", base, alt);
			printf("\nSeu perimetro eh: %d, sua area eh: %d e sua diagonal eh: %lf", per, area, diag);
			
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
