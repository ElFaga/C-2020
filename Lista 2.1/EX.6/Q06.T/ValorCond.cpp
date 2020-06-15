#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main (){
	
	int	op, tx, vcond;	
	
	printf("Tabela de Animais");
	printf("\n");
	printf("\n100 - Cachorro");
	printf("\n");
	printf("\n101 - Gato");
	printf("\n");
	printf("\n102 - Papagaio");
	printf("\n");
	printf("\n103 - Nenhum animal de estimacao");
	printf("\n");
	printf("\nDigite o codigo correspondente com seu animal de estimacao: ");
	scanf("%d", &op);
	
	if (op < 100 || op > 103){
		printf("\nCodigo invalido!");
		return 0;
	}
	
	if (op == 100){
		tx = 50;
		vcond = 260 + tx;
		printf("O condominio custara: %d", vcond);
	}
	
	if (op == 101){
		tx = 30;
		vcond = 260 + tx;
		printf("O condominio custara: %d", vcond);
	}
	
	if (op == 102){
		tx = 12;
		vcond = 260 + tx;
		printf("O condominio custara: %d", vcond);
	}
	
	if (op == 103){
		tx = -20;
		vcond = 260 + tx;
		printf("O condominio custara: %d", vcond);
	}
	
	
	
	
	
	
	return 0;
}
