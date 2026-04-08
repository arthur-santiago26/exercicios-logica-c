#include <stdio.h>

int main(){
	int a, b, quociente, resto;
	
	printf("Dividendo: ");
	scanf("%d", &a);
	
	printf("Divisor: ");
	scanf("%d", &b);
	
	quociente = a / b;
	resto = a % b;

	printf("\n--- Resultado ---\n");
    printf("Quociente: %d\n", quociente);
	printf("Resto:     %d\n", resto);
	
	return 0;
	
}