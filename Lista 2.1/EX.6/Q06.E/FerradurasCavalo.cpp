#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	int cav, fer;	
	
	printf("Digite o numero de cavalos: ");
	scanf("%d", &cav);
	
	fer = 4 * cav;
	
	printf("Voce precisa de:%d ferraduras para que todos os cavalos tenham ferradura",fer);
	
	return 0;	
}
