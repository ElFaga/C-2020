#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int anat, annas, id, a, m, s, d, op;	
	
	printf("Digite o ano do seu nascimento: ");
	scanf("%d", &annas);
	
	if (annas <= 0){
		printf("Ano de nascimento invalido!");
		return 0;
	}
	
	printf("Digite o ano atual: ");
	scanf("%d", &anat);
	
	if (anat <= 0){
		printf("Ano atual invalido!");
		return 0;
	}
	
	if (annas > anat){
		printf("Digite anos validos!");
		return 0;
	}
	id = anat - annas;
	
	printf("\n");
	printf("Digite o numero de acordo com a opcao que voce deseja!");
	printf("\n");
	printf("\n0 - Anos");
	printf("\n1 - Meses");
	printf("\n2 - Semanas");
	printf("\n3 - Dias");
	printf("\n");
	printf("\nResposta: ");
	scanf("%d", &op);
	printf("\n");
	
	while (op != 0 && op != 1 && op != 2 && op != 3){
		printf("Opcao invalida");
	}

	if (op == 0){
		a = id;
		printf("Voce tem %d anos de vida!", a);
		return 0;
	}

	if (op == 1){
		m = id * 12;
		printf("Voce tem %d meses de vida!", m);
		return 0;
	}

	if (op == 2){
		s = id * 48;
		printf("Voce tem %d semanas de vida!", s);
		return 0;
	}

	if (op == 3){
		d = id * 365;
		printf("Voce tem %d dias de vida!", d);
		return 0;
	}
	
	return 0;
}
