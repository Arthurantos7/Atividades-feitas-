#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

#define TAM 5
#define SIZE 3
void cabecalho() {
	system("cls || clear");
	printf("\n=== ESCOLA ===\n");
	fflush(stdin);
}
int main (){

	int numero[TAM], contadorPar = 0, contadorImpar = 0;
	int i;
	
	
	for(i = 0; i < TAM; i++){
	cabecalho();
	printf("Digite o número: \n", i+1);
	scanf("%d", &numero[i]);
	if(numero[i] % 2 == 0){
		contadorPar++;
	}
	else{
		contadorImpar++;
	}
	}
	cabecalho();
	for(i = 0; i < TAM; i++){
	printf("%dº número; %d\n", i+1, numero[i]);
	}
	printf("Quantidades de número impares: %d\n", contadorImpar);
	printf("Quantidades de número pares: %d\n", contadorPar);
	
	return 0;
}