#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main(){
	
	int id;
	
	printf("Digite a idade: ");
	scanf("%d", &id);
	
	if (id < 5){
		printf("\nIdade invalida!");
		return 0;
	}
	
	if (id >= 5 && id <= 7){
		printf("\nCategoria infantil A!");
		return 0;
	}
	
	if (id >= 8 && id <= 10){
		printf("\nCategoria infantil B!");
		return 0;
	}
	
	if (id >= 11 && id <= 13){
		printf("\nCategoria juvenil A!");
		return 0;
	}
	
	if (id >= 14 && id <= 17){
		printf("\nCategoria juvenil B!");
		return 0;
	}
	
	if (id >= 18){
		printf("\nCategoria senior!");
		return 0;
	}
	
	return 0;
}
