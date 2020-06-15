#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	double vemp, divida;
	
	printf("\nDigite o valor do emprestimo: ");
	scanf("%lf", &vemp);
	
	system("pause");
	if (vemp <= 0){
		printf("\nValor invalido!");
	}else{
	
	divida = vemp * 1.05;
	
	printf("\nO seu emprestimo eh de: %lf, e sua divida apos 6 meses sera: %lf", vemp, divida);
}
	return 0;
}
