#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
	
	
	int divid, divis;
	double quo, res;
	
	
	printf("\nDigite o numero a ser dividido: ");
	scanf("%d", &divid);
	
	printf("\nDigite o numero que ira dividir %d: ", divid);
	scanf("%d", &divis);
	
	printf("\nOs numeros digitados foram: %d e %d \n", divid, divis);
	
	system("pause");
	
	quo = divid / divis;
	res = divid % divis;
	
	printf("\nPara tais dados temos que o quociente equivale a: %lf e o resto equivale a: %lf", quo, res);
	
	
	return 0;
}
