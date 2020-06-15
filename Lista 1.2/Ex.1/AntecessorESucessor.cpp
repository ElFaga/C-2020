#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main (){
	
	int opa, op, ops;	
	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &op);
	
	opa = op - 1;
	ops = op + 1;
	
	printf("\nVoce digitou o numero: %d! Seu antecessor eh: %d e seu sucessor eh: %d!", op, opa, ops);
	
	return 0;
}
