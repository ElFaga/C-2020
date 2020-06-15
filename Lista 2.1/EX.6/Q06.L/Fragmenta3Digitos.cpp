#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <string.h>

main(){
	
	int num, c, d, u;	
	
	printf("Digite um valor inteiro de tres digitos: ");
	scanf("%d", &num);
	
	c = num / 100;
	d = num % 100;
	d = d / 10;
	u = num % 10;
	
	if (c == 0){
		printf("\nEste numero nao possui tres digitos validos!");
		printf("\n");
		return 0;
	}
	
	if (c > 9 || d > 9 || u > 9){
		printf("\nEste numero possui mais de tres digitos!");
		printf("\n");
		return 0;
	}
	
	printf("\nValor da centena: %d", c);
	printf("\n");
	printf("\nValor da dezena: %d", d);
	printf("\n");
	printf("\nValor da unidade: %d", u);
	printf("\n");
	
	printf("\n");
	system ("pause");
	
	
	if (c > d && c > u){
		printf("\nO maior valor eh o da centena: %d", c);
		printf("\n");
		return 0;
	}
	
	if (d > c && d > u){
		printf("\nO maior valor eh o da dezena: %d", d);
		printf("\n");
		return 0;
	}
	
	if (u > c && u > d){
		printf("\nO maior valor eh o da unidade: %d", u);
		printf("\n");
		return 0;
	}
	
	if (c == d && d == u){
		printf("\nTodos os valores do numero digitado, sao equivalentes: %d", c);
		printf("\n");
		return 0;
	}	
	
	if (c == d && c > u){
		printf("\nO valor da centena e da dezena sao equivalentes: %d", c);	
		printf("\n");
		return 0;
	}
	
	if (c == u && c > d){
		printf("\nO valor da centena e da unidade sao equivalentes: %d", c);
		printf("\n");
		return 0;
	}	
	
	if (u == d && u > c){
		printf("\nO valor da unidade e da dezena sao equivalentes: %d", u);
		printf("\n");
		return 0;
	}
	
	return 0;
}
