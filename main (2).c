#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

#define TAM 5
#define SIZE 3
void cabecalho(){
	system("cls || clear");
	printf("\n=== ESCOLA ===\n");
	fflush(stdin);
}
int main(){
    setlocale(LC_ALL, "");
    int i, numero[TAM], menorNumero = 999, maiorNumero = 0;
    
    for(i = 0;i < TAM; i++){
        cabecalho();
        printf("%dº número: ", i + 1);
        scanf("%d", &numero[i]);
        if(numero[i] > maiorNumero){
            maiorNumero = numero[i];
        }
        if(numero[i] < menorNumero){
            menorNumero = numero[i];
        }
        
    }
        cabecalho();    
        for(i = 0;i < TAM; i++){
            printf("%dº número: %d\n",i+1, numero[i]);
        }
        
        printf("Maior número: %d\n", maiorNumero);
        printf("Menor número: %d\n", menorNumero);
    return 0;
}