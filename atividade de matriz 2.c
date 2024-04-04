#include <ctype.h>
#include <limits.h>
#include <stdlib.h>
#include <locale.h> 

#define DISCIPLINA 4
#define NOTAS 2

int main (){
	setlocale(LC_ALL, "");
	
	char disciplina[DISCIPLINA][200]; //vetor para dois nomes
	float notas[DISCIPLINA][NOTAS]; //matriz com 3 notas para dois alunos
	float soma = 0, media[4];
	int i, j;
	
	for(i = 0; i < DISCIPLINA; i++){
		printf("Digite o nome da %i� Disciplina: ", i+1);
		scanf("%s",&disciplina[i]);
		
		for(j = 0; j < NOTAS; j++){
			printf("Digite a %i� nota:", j+1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
		}
		media[i] = soma / NOTAS;
		soma = 0;
		
		printf("\n"); // Somente para pular uma linha.
	} 
	printf("\n=== Exibindo resultados ===\n");
	for(i = 0; i < DISCIPLINA; i++){
		printf("%i� Disciplina: %s \n", i+1, disciplina[i]);
		
		for(j = 0; j < NOTAS; j++){
			printf("%i� Nota: %.1f \n", j+1, notas[i][j]);
		}
		
		printf("M�dia da %i� Disciplina: %.1f \n", i+1, media[i]);
		
		printf("\n"); // Somente para pular uma linha.
	}
	return 0;
}
