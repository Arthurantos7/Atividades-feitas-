#include <stdio.h>
#include <locale.h>

#define  SIZE 5
#define  STRING 200

int main(){
    setlocale(LC_ALL, "");
    
    int idades[SIZE], i; 
    char nomes[SIZE][STRING];
    
    printf("\n=== Solicitando dados para o usúario ==\n");
    for (i = 0; i < SIZE; i++){
        printf("\nDigite o %iº nome: ", i+1);
        fflush(stdin);
        scanf("%s",&nomes[i]);
        
        printf("Digite %iª idade: ", i+1);
        scanf("%i",&idades[i]);
    }    
    
    printf("\n=== Exibindo resultados ===\n");
    for (i = 0; i < SIZE; i++) {
        printf("%iº nome: %s \n", i+1, nomes[i]);
        printf("%iª idade: %i \n\n", i+1, idades[i]);
        
    }
    
    return 0;
}
