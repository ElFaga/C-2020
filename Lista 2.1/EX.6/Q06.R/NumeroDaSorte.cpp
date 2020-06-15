#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	float valc, nums;
	int id, an;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &valc);
	
	if(valc <= 0){
		printf("Valor invalido!");
	} else if (valc >= 0){
			printf("Digite seu ano de nascimento: ");
			scanf("%d", &an);
			
			id = (2020 - an);
			
			} if (id <= 0){
				printf("Idade invalida!");
				} else if (valc < 500){
						nums = 5000 - (valc * id);
						printf("Seu numero da sorte eh: %f", nums);
						} else if (valc == 500){
								nums = (id * id);
								printf("Seu numero da sorte eh: %f", nums);
								} else if (valc > 500){
										nums = 50000 - (valc *  id);
										printf("Seu numero da sorte eh: %f", nums);
										}

	return 0;
}
