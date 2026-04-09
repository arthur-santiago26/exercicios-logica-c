#include <stdio.h>

int main() {
    float preco, impostos, revendedor, total;

    printf("===== PRECO DO CARRO =====\n\n");

    printf("Digite o preco de fabrica: R$ ");
    scanf("%f", &preco);

    impostos   = preco * 0.45;
    revendedor = preco * 0.28;
    total      = preco + impostos + revendedor;

    printf("\n--- Resultado ---\n");
    printf("Preco de fabrica: R$ %.2f\n", preco);
    printf("Impostos (45%%):   R$ %.2f\n", impostos);
    printf("Revendedor (28%%): R$ %.2f\n", revendedor);
    printf("Preco final:      R$ %.2f\n", total);
    printf("-----------------\n");

    return 0;
}
