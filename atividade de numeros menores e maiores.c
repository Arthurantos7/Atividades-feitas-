#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

int main (){
	setlocale(LC_ALL, "");
	int vetor[5];
	int i, soma, elementos, media, contador;
	int maiorNumero = 0, menorNumero = 999;
	
	printf("Digite os elementos do vetor: \n");
	for(i = 0; i < 5; i++){
		printf("Elemento %d: ", i + 1);
		scanf("%d", &vetor[i]);
		
		soma+=vetor[i];
		contador++;
	if(vetor[i] > maiorNumero){
		maiorNumero = vetor[i];	
	}
	if(vetor[i] < menorNumero){
		menorNumero = vetor[i];
	}
}
	
	for (i = 0; i < 5; i++) {
		printf("Elemento %d: %d\n", i+1, vetor[i]);
	}
	
	printf("\nMaior número: %i", maiorNumero);
	printf("\nMenor número: %i", menorNumero);
	
		
	return 0;
}

