#include <stdio.h>

int main() {
    float m1, m2, soma, media;

    printf("===== MEDIAS =====\n\n");

    m1 = (7 + 8 + 9) / 3.0;
    m2 = (4 + 5 + 6) / 3.0;

    soma  = m1 + m2;
    media = soma / 2.0;

    printf("\n--- Resultados ---\n");
    printf("Media 1:     %.2f\n", m1);
    printf("Media 2:     %.2f\n", m2);
    printf("Soma:        %.2f\n", soma);
    printf("Media final: %.2f\n", media);
    printf("------------------\n");

    return 0;
}