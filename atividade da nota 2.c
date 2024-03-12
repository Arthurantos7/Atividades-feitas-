#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	
	//Declarando variáveis 
	int nota, soma,  i;
	float media;
	
	// Solicitando dados para o usuário.
	for (i = i; i <= 4; i++){
	
		printf("Digite a %iª nota: ", i);
		scanf("%i", &nota);	
	
	// Soma = soma + nota 
	soma += nota;
}
	media = soma / 4;
	
	// Exibindo resultados
	printf("\nMédia: %.1f \n", media);
	
	return 0;

}

