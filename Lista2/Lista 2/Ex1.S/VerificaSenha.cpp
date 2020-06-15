#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char senha[5];	
	
	printf("\nDigite a senha: ");
	scanf("%s", &senha);
	if (senha[0] == 'A'){
			if (senha[1] == 'S'){
					if (senha[2] == 'D'){
	    					if (senha[3] == 'F'){	
									if (senha[4] == 'G'){
											printf("\nSenha correta!");
									} else {
										printf("\nSenha incorreta!");
										}
								} else {
										printf("\nSenha incorreta!");
								}
						} else {
								printf("\nSenha incorreta!");
							}
					} else {
							printf("\nSenha incorreta!");
					}
			} else {
					printf("\nSenha incorreta!");
					}
	
	
	
	
	return 0;
}
