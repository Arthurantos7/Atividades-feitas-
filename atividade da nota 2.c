#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	
	//Declarando vari�veis 
	int nota, soma,  i;
	float media;
	
	// Solicitando dados para o usu�rio.
	for (i = i; i <= 3; i++){
	
		printf("Digite a %i� nota: ", i);
		scanf("%i", &nota);	
	
	// Soma = soma + nota 
	soma += nota;
}
	media = soma / 3;
	
	// Exibindo resultados
	if (media >= 7){
	printf("\nM�dia: %.1f \n", media);
	printf("\nAprovado");
	}else{
	printf("\nM�dia: %.1f \n", media);
	printf("\nReprovado");
	}
	
	return 0;

}

