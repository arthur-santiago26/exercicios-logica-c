#include <stdio.h>

int main(){
	float cm, polegadas;
	
	printf("===== CM PARA POLEGADAS =====\n\n");
	printf("Centimetros: ");
	scanf("%f", &cm);
	
	polegadas = cm / 2.54;	 		 		  		
	
	printf("\n--- Resultado ---\n");
	printf("Polegadas: %.2f\n", polegadas);
	 printf("-----------------\n");
	 
	return 0;
}