#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if (num % 3 == 0 && num % 6 == 0){
		printf("O numero digitado eh divisivel por 3 e 6!");
	} else if (num % 3 == 0){
			printf("O numero digitado eh divisivel por 3!");
	} else if (num % 6 == 0){
			printf("O numero digitado eh divisivel por 6!");
	} else {
		printf("O numero digitado nao eh divisivel por 3 ou 6!");
	}

		return 0;
	
}
