#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	double sal, salc, valf;	
	int op;
	
	printf("Digite o valor do seu salario: ");	
	scanf("%lf", &sal);
	
	if (sal <= 0){
		printf("\n");
		printf("Salario invalido!");
		return 0;
	}
	
	if (sal > 0){
		printf("\n");
		printf("Digite o valor do financiamento desejado: ");
		scanf("%lf", &valf);
	}
	
	if (valf <= 0){
		printf("\n");
		printf("Financiamento invalido!");
		return 0;
	}
	
		printf("\n");
		printf("Deseja incluir o conjuge?");
		printf("\n");
		printf("\n0 - Nao");
		printf("\n1 - Sim");
		printf("\n");
		printf("\nDigite sua resposta: ");
		scanf("%d", &op);

		printf("\n");
			
	if (op < 0 || op > 1){
		printf("Codigo invalido!");
		return 0;
	}

	if (op == 0){
		if (sal >= 5 * valf){
			printf("Financiamento concedido!");
		}
		if (sal < 5 * valf){
			printf("Financiamento negado!");
		}
	}

	if (op == 1){
		
		printf("Digite o salario do(a) conjuge: ");
		scanf("%lf", &salc);
		printf("\n");
		
		if(salc <= 0){
			printf("Salario invalido!");
			return 0;
		}
		
		if (valf <= 5 * (sal + salc)){
			printf("Financiamento concedido!");
		}
		if (valf > 5 * (sal + salc)){
			printf("Financiamento negado!");
		}
	}


	printf("\n");
	printf("\nObrigado por nos consultar!");
	
 return 0;	
}
