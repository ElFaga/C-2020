#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	double alt, peso_m, peso_f;
    char sexo;


    printf("\nDigite o sexo da pessoa: ");
    scanf("%c", &sexo);
    printf("\nDigite a altura da pessoa: ");
    scanf("%lf", &alt);

    if(sexo == 'm', 'M')
    {
      peso_m = (72.8 * alt) - 58 ;
      printf("\nO peso ideal eh: %lf", peso_m);
     } else if (sexo == 'f', 'F') {

     peso_f = (62,1 * alt) - 44.7;

     printf("\nO peso ideal eh: %lf", peso_f);

    }

        return 0;
}
