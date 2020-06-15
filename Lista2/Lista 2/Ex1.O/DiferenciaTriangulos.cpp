#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	
	double a, b, c;
	
	printf("\nDigite o valor do lado A: ");
	scanf("%lf", &a);
	printf("\nDigite o valor do lado B: ");
	scanf("%lf", &b);
	printf("\nDigite o valor do lado C: ");
	scanf("%lf", &c);
	
	printf("\nOs dados digitados foram - A: %lf, B: %lf e C: %lf \n", a, b, c);
	system("pause");
	
	if (a >= b + c || b >= a + c || c >= a + b){
		printf("\nEsta figura nao eh um triangulo, pois desobedece a regra de um lado qualquer deve ser menor que a soma dos outros dois!");
		return 0;
	} else
	if(a == b && b == c){
		printf("\nEste triangulo eh equilatero, pois todos os lados sao iguais!");
	} if (a == b && a != c || b == c && b != a || c == a && c != a){
		printf("\nEste triangulo eh isosceles, pois possui dois lados iguais e um diferente!");
	} if (a != b && b != c){
		printf("\nEste triangulo eh escaleno, pois todos os lados sao diferentes!");
	}	
	

	
	return 0;
}
