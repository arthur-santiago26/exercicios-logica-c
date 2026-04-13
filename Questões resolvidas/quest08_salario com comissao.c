#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float salario_fixo, vendas, salario_final;
	
	printf("===== SALÁRIO COM COMISSÃO =====\n\n");
	
	printf("Qual é o seu salário? ");
	scanf("%f", &salario_fixo);
	
	printf("Quanto você vendeu? " );
	scanf("%f", &vendas);
 	
 	salario_final = salario_fixo + (0.15 * vendas);
 	
 	printf("\n--- Resultado ---\n");
 	printf("Salário final: R$ %.2f\n", salario_final );
 	printf("-----------------\n");
 	
	return 0;
	
}