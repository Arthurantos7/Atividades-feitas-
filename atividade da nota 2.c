#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	
	//Declarando variáveis 
	int nota, soma,  i;
	float media;
	
	// Solicitando dados para o usuário.
	for (i = i; i <= 3; i++){
	
		printf("Digite a %iª nota: ", i);
		scanf("%i", &nota);	
	
	// Soma = soma + nota 
	soma += nota;
}
	media = soma / 3;
	
	// Exibindo resultados
	if (media >= 7){
	printf("\nMédia: %.1f \n", media);
	printf("\nAprovado");
	}else{
	printf("\nMédia: %.1f \n", media);
	printf("\nReprovado");
	}
	
	return 0;

}

