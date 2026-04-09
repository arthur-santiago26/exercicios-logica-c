#include <stdio.h>

int main() {
    int valor, n100, n50, n20, n10;

    printf("===== CAIXA ELETRONICO =====\n\n");

    printf("Digite o valor a sacar: ");
    scanf("%d", &valor);

    n100 = valor / 100; valor %= 100;
    n50  = valor / 50;  valor %= 50;
    n20  = valor / 20;  valor %= 20;
    n10  = valor / 10;

    printf("\n--- Cedulas ---\n");
    printf("Notas de R$100: %d\n", n100);
    printf("Notas de R$50:  %d\n", n50);
    printf("Notas de R$20:  %d\n", n20);
    printf("Notas de R$10:  %d\n", n10);
    printf("---------------\n");

    return 0;
}