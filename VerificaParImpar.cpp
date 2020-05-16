#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
	
	
	int num;
	
	printf("\nDigite um numero: ");
	scanf("%d", &num);
	
	if (num %2==0){
		printf("\nO numero digitado foi: %d e ele eh par!", num);
	} else {
		printf("\nO numero digitado foi: %d e ele eh impar!", num);
	}

	return 0;
}
