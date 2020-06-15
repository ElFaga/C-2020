#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){

	double a1, a20, raz;
	
	printf("\nDigite o primeiro termo desta P.A.: ");
	scanf("%lf", &a1);
	
	printf("\nDigite a razao desta P.A.: ");
	scanf("%lf", &raz);
	
	a20 = a1 + (20 - 1) * raz;
	
	printf("\nO vigesimo termo desta P.A.: %lf", a20);
	
	
	return 0;
}
