#include <stdio.h>
#include <math.h>

int main(){
    float raio, altura, area, volume;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    area = 2 * M_PI * raio * (altura + raio);
    volume = M_PI *raio *raio * altura;

    printf("\n--- Resultados ---\n");
    printf("A area do cilindro e: %.2f\n", area);
    printf("O volume do cilindro e: %.2f\n",volume);
    printf("-----------------\n");

    return 0;

}