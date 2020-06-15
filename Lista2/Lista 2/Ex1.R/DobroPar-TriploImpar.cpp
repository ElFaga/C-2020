#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){


	int num, res;

	printf("\nDigite um numero: ");
	scanf("%d", &num);

	if (num %2 == 0){
		res = 2 * num;
		printf("\nEste numero eh par e seu dobro eh: %d", res);
	}else{
		res = 3 * num;
		printf("\nEste numero eh impar e seu triplo eh: %d", res);
	}

	return 0;

}
