#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){	
	
	int num;		
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num %2 == 0 && num %5 == 0 && num %10 == 0){
		printf("Este numero eh divisivel por 2, 5 e 10!");
		return 0;
	}
	
	if (num %2 == 0){
		printf("Este numero eh divisivel somente por 2!");
		return 0;
	}
	
	if (num %5 == 0){
		printf("Este numero eh divisivel somente por 5!");
		return 0;
	}
	
	if (num %2 != 0 && num %5 != 0 && num %10 != 0){
		printf("Este numero nao eh divisivel por 2, 5 ou 10!");
		return 0;
	}	
	
	
	return 0;	
	
}
