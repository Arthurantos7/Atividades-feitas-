#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void somar(int n1, int n2) {
	int soma;
	soma = n1 + n2;
	printf("\nSoma: %i \n", soma);  
}

int main(){
	setlocale(LC_ALL, "");

	int primeiroNumero, segundoNumero;

	printf("Digite o primeiro numero: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo numero: ");
	scanf("%i",&segundoNumero);

	somar(primeiroNumero, segundoNumero);

	return 0;
}
