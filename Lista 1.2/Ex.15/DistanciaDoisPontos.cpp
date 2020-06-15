#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main(){
	
	int xa, xb, ya, yb;
	double dist;
	
	printf("Digite as coordenadas do ponto A");
	printf("\n");
	
	printf("\n");
	
	printf("Coordenada X: ");
	scanf("%d", &xa);
	printf("\n");
	printf("Coordenada Y: ");
	scanf("%d", &ya);
	
	printf("\n");
	
	printf("Digite as coordenadas do ponto B");
	printf("\n");
	
	printf("\n");
	
	printf("Coordenada X: ");
	scanf("%d", &xb);
	printf("\n");
	printf("Coordenada Y: ");
	scanf("%d", &yb);
	
	if (xa != xb && ya != yb){
	dist = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
	
	printf("\n");
	
	printf("A distancia entre esses dois pontos eh:%lf", dist);
	
	return 0;	
	}
	
	if (xa == xb && ya == yb){
		printf("\n");
		printf("Estes dois pontos estao na mesma coordenada!");
		printf("\n");
		return 0;
	}
}
