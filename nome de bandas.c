#include <stdlib.h>
#include <locale.h> 

#define BANDA 3
#define INTEGRANTE 2

int main (){
	setlocale(LC_ALL, "");

	char banda[BANDA][200];
	char integrante[BANDA][INTEGRANTE][200]; 
	int i,j;
	
	for(i = 0; i < BANDA; i++){
	printf("Digite o nome da %i� banda: \n", i+1);
	gets(banda[i]);

	for(j = 0; j < INTEGRANTE; j++){
	printf("Digite o nome da %i� integrante: \n", j+1);
	gets(integrante[i][j]);
	}
}
	system("cls || clear");
	for(i = 0; i < BANDA; i++){
	printf("============= \n");
	printf("%i� Banda: %s \n", i + 1, banda[i]);	
	
	for(j = 0; j < INTEGRANTE; j++){
	printf("%i� integrante: %s \n", j + 1, integrante[i][j]);	
	}

	}
	return 0;
}
