#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	double n1, n2 , n3 , n4, med;
	
	
	printf("\nDigite a primeira nota: ");
	scanf("%lf", &n1);
	
	printf("\nDigite a segunda nota: ");
	scanf("%lf", &n2);
	
	printf("\nDigite a terceira nota: ");
	scanf("%lf", &n3);
	
	printf("\nDigite a quarta nota: ");
	scanf("%lf", &n4);
	
	med = (n1 + n2 + n3 + n4) / 4;
	
	printf("\nA media das notas inseridas eh: %lf", med);
	
	return 0;
}
