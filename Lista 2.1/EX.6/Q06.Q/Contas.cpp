#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <string.h>

main(){
	
	float i, sal, con, j, total=0, res;	
	
	printf("Digite o salario que Joao recebeu este mes: ");
	scanf("%f", &sal);
	
	if (sal <= 0){
		printf("\nSalario invalido!");
		return 0;
	}
	
	for(i=0; i<=1 ;i++)
	{
		printf("\nDigite o valor da conta: ");
		scanf("%f", &con); j = con * 1.02;
		
		if (con <= 0){
			printf("\nValor da conta invalido!");
			return 0;
		}
		
		total = total + j;
	}
	res = sal - total;
	
	if(res >= 0){
		printf("\nSera possivel pagar as duas contas e sobrarao %fR$ do salario de Joao!", res);
		return 0;
	}
	
	if (res < 0){
		printf("\nNao sera possivel pagar as duas contas de Joao!");
		return 0;
	}
		
	
	return 0;
}
