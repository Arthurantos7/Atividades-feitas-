#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

#define TAM 4
#define SIZE 3
void cabecalho() {
	system("cls || clear");
	printf("\n=== ESCOLA ===\n");
	fflush(stdin);
}
int main (){
    setlocale(LC_ALL, "");
	int i, numero[TAM], soma = 0, media = 0, contador = 0;
	char nome[200];
	
	cabecalho();
	printf("Digite seu nome: \t");
	gets(nome);
	
	for(i = 0;i < TAM; i++){
	printf("Digite sua %dª nota: \t", i+1);
	scanf("%d", &numero[i]);
    contador++;
    soma += numero[i];
}
    media = soma / contador;
    
    printf("Nome: %s\n", nome);
    for(i = 0;i < TAM; i++){
        printf("%dª nota: %d\n", i+1, numero[i]);
}
        printf("Média: %d\n", media);

    if(media < 5){
        printf("REPROVADO");
}        
    if(media >= 5 && media < 7){
        printf("RECUPERAÇÃO");
    }
    if(media >= 7){
        printf("APROVADO");
    }
    
    return 0;
}