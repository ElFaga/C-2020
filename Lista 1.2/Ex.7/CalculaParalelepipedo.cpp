#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int a, b, c, area, vol;
	double diag;
	
	printf("\nDigite o valor do primeiro lado: ");
	scanf("%d", &a);
	if (a <= 0){
		printf("\nValor invalido!");
		return 0;
	} else {
			printf("\nDigite o valor do segundo lado: ");
			scanf("%d", &b);
				} if (b <= 0){
					printf("\nValor invalido!");
					return 0;
					} else {
							printf("\nDigite o valor do terceiro lado: ");
							scanf("%d", &c);
							}  if (c <= 0){
								printf("\nValor invalido!");
								return 0;
							} else {
								
								vol = a * b * c;
								area = 2 * a * b + 2 * b * c + 2 * a * c;
								diag = sqrt(a*a + b*b + c*c);
								
								system ("pause");
								
								printf("\nPara um paralelepipedo cujos lados sao %d, %d e %d", a, b, c);
								printf("\nSeu volume equivale a: %d, sua area equivale a: %d, sua diagonal equivale a: %lf", vol, area, diag);
							}


	
	
	return 0;
	
}
