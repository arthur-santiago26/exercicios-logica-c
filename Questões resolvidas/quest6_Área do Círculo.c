#include <stdio.h>
#include <math.h>

int main(){
	float raio, area;

	printf("===== Area do circulo =====\n\n");
	printf("Digite o raio: ");
	scanf("%f", &raio);
 	
 	area = M_PI * raio * raio;
 	
	printf("\n--- Resultado ---\n");
 	printf("Area: %.2f\n", area);
	printf("-----------------\n");
		
	return 0;
	
}