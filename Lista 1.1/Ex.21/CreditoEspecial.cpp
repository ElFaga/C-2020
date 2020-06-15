#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
	
	double sm, cred;
	
	printf("Digite seu saldo medio: ");
	scanf("%lf", &sm);
	
	if (sm < 0){
		printf("\n");
		printf("Saldo medio invalido!");
		printf("\n");
		return 0;
	}
	
	if (sm >= 0 && sm <= 200){
		printf("\n");
		printf("Voce nao possui credito disponivel!");
		printf("\n");
		return 0;
	}
	
	if (sm >= 201 && sm <= 400){
		printf("\n");
		cred = sm * 0.2;
		printf("Voce possui R$%lf de credito!", cred);
		printf("\n");
		return 0;
	}
	
	if (sm >= 401 && sm <= 600){
		printf("\n");
		cred = sm * 0.3;
		printf("Voce possui R$%lf de credito!", cred);
		printf("\n");
		return 0;
	}
	
	if (sm >= 601){
		printf("\n");
		cred = sm * 0.4;
		printf("Voce possui R$%lf de credito!", cred);
		printf("\n");
		return 0;
	}
		
	return 0;	
	
}
