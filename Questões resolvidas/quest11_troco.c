#include <stdio.h>

int main() {
    float valor, pago, troco;

    printf("===== TROCO =====\n\n");

    printf("Preco do produto: R$ ");
    scanf("%f", &valor);

    printf("Valor pago:       R$ ");
    scanf("%f", &pago);

    troco = pago - valor;

    printf("\n--- Resultado ---\n");
    printf("Troco: R$ %.2f\n", troco);
    printf("-----------------\n");

    return 0;
}