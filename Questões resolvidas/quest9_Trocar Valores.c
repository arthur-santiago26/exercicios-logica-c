#include <stdio.h>

int main() {
    float a, b, temp;

    printf("===== TROCA DE VALORES =====\n\n");

    printf("Valor de A: ");
    scanf("%f", &a);

    printf("Valor de B: ");
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\n--- Resultado ---\n");
    printf("A: %.0f\n", a);
    printf("B: %.0f\n", b);
    printf("-----------------\n");

    return 0;
}