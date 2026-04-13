#include <stdio.h>

int main(){
	float num, antecessor, sucessor;
	
	printf("Digite o numero: ");
	scanf("%f", &num);
 	
 	antecessor = num - 1;
 	sucessor = num + 1;
 
    printf("\n--- Resultado ---\n");
	printf("Antecessor: %.1f\n", antecessor);
	printf("Sucessor:   %.1f\n", sucessor);	
	printf("-----------------\n");

	
	return 0;	
}