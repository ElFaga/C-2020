#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
	
	double sb, sl;
	char nome[300];
	
	printf("\nDigite seu primeiro nome: ");
	scanf("%s", &nome);
	
	printf("\nDigite seu salario bruto: ");
	scanf("%lf", &sb);
	
	sl = (sb * 0.92);
	
	if (sb <= 0) {
		printf("Salario invalido!");
	}
	
	printf("\nSeu nome eh: %s, seu salario bruto eh: %lf e seu salario liquido sera: %lf.", nome, sb, sl);
	printf("\nO salario liquido eh definido multiplicando seu salario bruto por 0.92, para que sejam descontados oito porcento para o INSS");
	
	return 0;
	
}
