#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <stdlib.h>

int main (){
	setlocale(LC_ALL, "");
	
	int numero[2][2];
	int i,j;
	
	//numero[0][0] = 1;
	//numero[0][1] = 2;
	//numero[1][0] = 3;
	//numero[1][1] = 4;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
	
	prinf("Elemento da linha %d coluna %d", i + 1, j + 1);
	scanf("%d", &numero[i][j]);
	
	}  
	}
	
	printf("Primeiro n�mero: %i \n",numero[0][0]);
	printf("Segundo n�mero: %i \n",numero[0][1]);
	printf("Terceiro n�mero: %i \n",numero[1][0]);
	printf("Quarto n�mero: %i \n",numero[1][1]);
	
	return 0;
}
