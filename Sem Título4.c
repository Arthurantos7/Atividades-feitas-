#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

int main (){
	setlocale(LC_ALL, "");
	int vetor[3];
	int i;
	printf("Digite os elementos do vetor: \n");
	for(i = 0; i < 3; i++){
		printf("Elemento %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}

	for (i = 0; i < 3; i++) {
		printf("Elemento %d: %d\n", i+1, vetor[i]);
	}

	return 0;
}
