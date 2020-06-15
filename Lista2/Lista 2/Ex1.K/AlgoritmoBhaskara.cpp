#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main (){
	
	int a, b, c;
    double delta, x1, x2;	

	printf("\nDigite o valor de A: ");
	scanf("%d", &a);

	if (a == 0){
		printf("\nEsta nao eh uma equacao de segundo grau!");
		return 0;
	} else {
		printf("\nDigite o valor de B: ");
		scanf("%d", &b);
			if (b == 0){
				printf("\nEsta nao eh uma equacao de segundo grau!");
				return 0;
			} else {
				printf("\nDigite o valor de C: ");
				scanf("%d", &c);
					if (c == 0){
						printf("\nEsta nao eh uma equacao de segundo grau!");
						return 0;
					}
			}
		}
			delta = (b * b) - 4 * a * c;
			if (delta < 0){
				printf("\nEsta equacao nao possui raizes reais");
			}
			if (delta > 0){
				
				x1 = (-b + sqrt(delta)) / 2 * a;
				x2 = (-b - sqrt(delta)) / 2 * a;
				printf("\nAs raizes desta equacao sao: x1: %lf e x2: %lf", x1, x2);
			}
			if (delta = 0){
				x1 = (-b + sqrt(delta)) / 2 * a;
				printf("\nA raiz desta equacao eh: %lf", x1);
			}
	

return 0;
}
