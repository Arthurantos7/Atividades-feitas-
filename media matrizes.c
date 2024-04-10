#include <stdlib.h>
#include <locale.h> 

#define DISCIPLINA 3
#define NOTAS 2

int main (){
	setlocale(LC_ALL, "");

	char disciplina[DISCIPLINA][200]; //vetor para dois nomes
	float notas[DISCIPLINA][NOTAS]; //matriz com 3 notas para dois alunos
	float soma = 0, media[DISCIPLINA];
	int i, j;

	for(i = 0; i < DISCIPLINA; i++){
		printf("Digite o nome da %iº Disciplina: ", i+1);
		scanf("%s",&disciplina[i]);
		
		for(j = 0; j < NOTAS; j++){
			printf("Digite a %iª nota:", j+1);
			scanf("%f",&notas[i][j]);
			soma += notas[i][j];
		}
		media[i] = soma / NOTAS;
		soma = 0;
		
		printf("\n"); // Somente para pular uma linha.
	} 
	system("cls || clear");
	printf("\n=== Exibindo resultados ===\n");
	for(i = 0; i < DISCIPLINA; i++){
		printf("%iº Disciplina: %s \n", i+1, disciplina[i]);
		
		if (media[i] >= 7){
		printf("\nAprovado\n");
	
		}	
		if(media[i] >= 5 && media[i] < 7 ){
		printf("\nRecuperação\n");
		}
		if(media[i] < 5){
		printf("\nReprovado\n");
	
		}
		
	for(j = 0; j < NOTAS; j++){
		printf("%iª Nota: %.1f \n", j+1, notas[i][j]);
	}
	printf("Média da %iº Disciplina: %.1f \n", i+1, media[i]);
	printf("\n"); // Somente para pular uma linha.
	
	}
	return 0;
}
