#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	
	//Declarando vari�veis 
	int nota, soma,  i;
	float media;
	
	// Solicitando dados para o usu�rio.
	for (i = i; i <= 45; i++){
	
		printf("Digite a %i� nota: ", i);
		scanf("%i", &nota);	
	
	// Soma = soma + nota 
	soma += nota;
}
	media = soma / 4;
	
	// Exibindo resultados
	printf("\nM�dia: %.1f \n", media);
	
	return 0;

}

