#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
	
int main(){
	
	double nota1, nota2, nota3, nota4, media;	
	
	printf("\nDigite a nota do primeiro bimestre: ");
	scanf("%lf", &nota1);
	
	printf("\nDigite a nota do segundo bimestre: ");
	scanf("%lf", &nota2);
	
	printf("\nDigite a nota do terceiro bimestre: ");
	scanf("%lf", &nota3);

	printf("\nDigite a nota do quarto bimestre: ");
	scanf("%lf", &nota4);	
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10 || nota4 < 0 || nota4 > 10){
		printf("\nDigite notas entre 0 e 10!");
	}else{
	
	
	printf("\nA media do aluno eh: %lf", media);
	
	if (media >= 6){
		printf("\nO aluno foi aprovado, parabens!");
	} 
	if (media < 6){
		printf("\nO aluno foi reprovado, estude mais!");
	}
}
}		
