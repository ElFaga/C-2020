#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

main (){
	
	double imc, p, h;	
	int op;
	
	printf("Digite seu peso: ");
	scanf("%lf", &p);
	printf("\n");
	
	if (p <= 0){
		printf("\nPeso invalido!");
		printf("\n");
		return 0;
	}
	
	printf("Digite a sua altura: ");
	scanf("%lf", &h);
	
	if (h <= 0){
		printf("\nAltura invalida!");
		printf("\n");
		return 0;
	}
	
	printf("\n0 - Masculino");
	printf("\n");
	printf("\n1 - Feminino");
	printf("\n");
	
	printf("\n");
	printf("Digite sua resposta de acordo com a tabela: ");
	scanf("%d", &op);
	
	if (op < 0 || op > 1){
		printf("\nOpcao invalida!");
		printf("\n");
		return 0;
	}
	
	imc = p / (h * h);
	
	if (op == 0){
		printf("\nSeu imc eh: %lf", imc);	 
		
		if (imc < 19.1){
			printf("\n");
			printf("\nVoce esta abaixo do peso!");
			printf("\n");
			return 0;
		}
		
		if (imc >= 19.1 && imc < 25.8){
			printf("\n");
			printf("\nVoce esta com peso normal!");
			printf("\n");
			return 0;
		}
		
		if (imc >= 25.8 && imc < 27.3){
			printf("\n");
			printf("\nVoce esta marginalmente acima do peso!");
			printf("\n");
			return 0;
		}
		
		if (imc >= 27.3 && imc <= 32.3){
			printf("\n");
			printf("\nVoce esta acima do peso ideal!");
			printf("\n");
			return 0;
		}
		
		if (imc > 32.3){
			printf("\n");
			printf("\nVoce esta obeso!");
			printf("\n");
			return 0;
		}
			
	}
	
	if (op == 1){
		printf("\nSeu imc eh: %lf", imc);
			
		if (imc < 20.7){
			printf("\n");
			printf("\nVoce esta abaixo do peso!");
			printf("\n");
			return 0;
		}
		
		if (imc >= 20.7 && imc < 26.4){
			printf("\n");
			printf("\nVoce esta com o peso normal!");
			printf("\n");
			return 0;
		}
		
		if (imc >= 26.4 && imc < 27.8){
			printf("\n");
			printf("\nVoce esta marginalmente acima do peso!");
			printf("\n");
			return 0;
		}	
		
		if (imc >= 27.8 && imc <= 31.1){
			printf("\n");
			printf("\nVoce esta acima do peso ideal!");
			printf("\n");
			return 0;
		}
		
		if (imc > 31.1){
			printf("\n");
			printf("\nVoce esta obesa!");
			printf("\n");
			return 0;
		}	
		
	}
	
	printf("Obrigado por utilizar nosso servico!");
	
	return 0;
}
