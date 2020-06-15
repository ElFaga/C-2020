#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int hora, min, seg;

	printf("\nDigite a hora: ");
	scanf("%d", &hora);
	
	printf("\nDigite os minutos: ");
	scanf("%d", &min);
	
	printf("\nDigite os segundos: ");
	scanf("%d", &seg);
	
	seg = (3600 * hora) + (60 * min) + seg;
	min = seg / 60;

	printf("\nPassaram-se %d minutos e %d segundos!", min, seg);


	return 0;
	
}
