#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int a1, a20, raz;
	
	printf("\nDigite o primeiro desta P.G.: ");
	scanf("%d", &a1);
	
	printf("\nDigite a razao desta P.G.: ");
	scanf("%d", &raz);
	
	a20 = a1 * pow(raz, 19);
	
	printf("\nO vigesimo termo desta P.G. equivale a: %d", a20);
	
	
	return 0;
	
}
