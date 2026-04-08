#include <stdio.h>

int main(){
	
	float a, b, soma, produto, divisao;
	   
	printf("Primeiro numero: ");
	scanf("%f", &a);
	   
	printf("Segundo numero: ");
	scanf("%f", &b);	

	soma =    a + b ;
	produto = a * b ;
	divisao = a / b ;
	
	printf("\n--- Resultado ---\n");
	printf("Soma:    %.2f\n", soma);
	printf("Produto: %.2f\n", produto);	
	printf("Divisao: %.2f\n", divisao);
	printf("-----------------\n");
	
	return 0;
}