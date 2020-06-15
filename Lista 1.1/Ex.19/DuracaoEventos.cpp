#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main (){
		
	int t, h, m, s;
	
	printf("Digite o tempo em segundos: ");
	scanf("%d", &t);
	
	if (t < 0){
		printf("\n");
		printf("Tempo em segundos invalido!");	
		printf("\n");	
		return 0;	
	}
	
	h = (t / 3600);
	m = ((t % 3600) / 60);
	s = ((t % 3600) % 60);
	
	printf("\nEste evento durou %d horas, %d minutos e %d segundos", h, m, s);
	
	return 0;
	
}
