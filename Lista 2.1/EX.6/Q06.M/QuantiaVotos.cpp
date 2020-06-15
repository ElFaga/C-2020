#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <string.h>

 int main(){

	double te, vv, vb, vn, s, pv, pn, pb;

	printf("Digite a quantidade total de eleitores: ");
	scanf("%lf", &te);

	if (te < 0){
		printf("\nQuantidade de eleitores invalida!");
		return 0;
	}

	printf("\nDigite a quantidade de votos validos: ");
	scanf("%lf", &vv);

	if (vv < 0){
		printf("\nQuantidade de votos validos invalida!");
		return 0;
	}

	printf("\nDigite a quantidade de votos brancos: ");
	scanf("%lf", &vb);
	
	if (vb < 0){
		printf("\nQuantidade de votos brancos invalida!");
		return 0;
	}

	printf("\nDigite a quantidade de votos nulos: ");
	scanf("%lf", &vn);

	if (vn < 0){
		printf("\nQuantidade de votos nulos invalida!");
		return 0;
	}

	s = vn + vb + vv;

	if (s != te){
		printf("\nQuantidade de votos digitada eh diferente do total de eleitores!");
		return 0;	
	}

	pv = 100 * vv / te;
	pb = 100 * vb / te;
	pn = 100 * vn / te;


	printf("\nVotos validos:%lf porcento do total", pv);
	printf("\n");
	printf("\nVotos brancos:%lf porcento do total", pb);
	printf("\n");
	printf("\nVotos nulos:%lf porcento do total", pn);
	printf("\n");

	return 0;	
}
