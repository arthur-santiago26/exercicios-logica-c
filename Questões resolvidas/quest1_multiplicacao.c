#include <stdio.h>

int main() {
	int a, b, resultado;
	
	printf("=== MULTIPLICACAO ===\n\n");
    printf("Digite dois numeros para serem multiplicados.\n\n");
    
	printf("Primeiro numero: ");
	scanf("%d", &a);
	
	printf("Segundo numero: ");
	scanf("%d", &b);
	
	resultado = a * b;
	
	printf("\n--- Resultado ---\n");
	printf("%d X %d = %d\n", a, b, resultado );
	printf("-----------------\n");
	
	return 0;
}