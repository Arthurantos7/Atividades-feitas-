#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

int main (){
	setlocale(LC_ALL, "");
	int vetor[3];
	int i, soma, elementos, media, contador, aprovado, reprovado, recuperacao;
	int primeiraNota, segundaNota;
	
	
	printf("Digite os elementos do vetor: \n");
	for(i = 0; i < 3; i++){
		printf("Elemento %d: ", i + 1);
		scanf("%d", &vetor[i]);
		
		soma+=vetor[i];
		contador++;
	}

	for (i = 0; i < 3; i++) {
		printf("Elemento %d: %d\n", i+1, vetor[i]);
	}
	
	// efetuando calculo 
	media = soma / contador;
	printf("\nMédia: %.1i", media);
	if(media >= 7){
		printf("\nAprovado");
		
	}
	
	if(media >= 5 && media < 7){
		printf("\nRecuperação");
	
	}
	if(media < 5 ){
		printf("\nReprovado");
	
	}
	
	return 0;
}

