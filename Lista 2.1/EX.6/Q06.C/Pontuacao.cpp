#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iostream>

int main(){
	
	int com1, com2, com3, col1, col2, col3;	
	
	printf("\nDigite os pontos do primeiro finalista: ");
	scanf("%d", &com1);
	
	if (com1 < 0) {
		printf("\n");
		printf("\nPontuacao invalida!");
		printf("\n");
		return 0;
	}
	
	printf("\nDigite os pontos do segundo finalista: ");
	scanf("%d", &com2);
	
	if (com2 < 0){
		printf("\n");
		printf("\nPontuacao invalida!");
		printf("\n");
		return 0;
	}
	
	printf("\nDigite os pontos do terceiro finalista: ");
	scanf("%d", &com3);
	
	if (com3 < 0){
		printf("\n");
		printf("\nPontuacao invalida!");
		printf("\n");
		return 0;
	}
	
	if (com1 > com2 && com1 > com3){
		com1 = col1;
	}
		else {
			if (com2 > com1 && com2 > com3){
				com2 = col1;
			}
				else {
					if (com3 > com1 && com3 > com2){
						com3 = col1;
					}
				}
			
		}
	
	
	if (com1 < com2 && com1 > com3){
		com1 = col2;
	}
		else {
			if (com2 < com1 && com2 > com3){
				com2 = col2;
			}
				else{
					if (com3 < com1 && com3 > com2){
						com3 = col2;
					}
				}
			}
	
	
	
	if (com1 < com2 && com1 < com3){
		com1 = col3;
	}
		else{
			if (com2 < com1 && com2 < com3)
			com2 = col3;
			else{
				if (com3 < com1 && com3 < com2){
					com3 = col3;
				}
			}
		}
	
	
	
	
	
	
	printf("Pontuacao do primeiro colocado: %d", col1);
	printf("Pontuacao do segundo colocado: %d", col2);
	printf("Pontuacao do terceiro colocado: %d", col3);
	
	return 0;
}
