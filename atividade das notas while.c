#include <stdio.h>
#include <locale.h>

int main(){
	float media = 0;
	float primeiraNota, segundaNota; 
	
	printf("Digite uma pimeira nota: ");
	scanf("%f", &primeiraNota);
	
	while(primeiraNota < 0 || primeiraNota > 10){
		printf("Digite uma primeira nota: ");
		scanf("%f", &primeiraNota);
	}
	printf("Digite uma segunda nota: ");
	scanf("%f", &segundaNota);
	
	while(segundaNota < 0 || segundaNota > 10){
		printf("Digite uma segunda nota: ");
		scanf("%f", &segundaNota);
	}
	// Efetuando calculo
	media = (primeiraNota + segundaNota) / 2;
	
	printf("\nMedia: %.1f ", media);
	
	return 0;
}
