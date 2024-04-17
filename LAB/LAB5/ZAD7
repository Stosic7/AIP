#include <stdio.h>

void prikazi_matricu(int matrica[10][10], int redovi, int kolone) {
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            printf("| %d ", matrica[i][j]);
        }
        printf("|\n");
    }
}

int main() {
    int redovi, kolone;
    printf("Unesite broj redova matrice: ");
    scanf("%d", &redovi);
    printf("Unesite broj kolona matrice: ");
    scanf("%d", &kolone);

    int matrica[10][10]; // Maksimalno 10 kolona za ovaj primer

    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrica[i][j]);
        }
    }

    printf("Matrica:\n");
    prikazi_matricu(matrica, redovi, kolone);

    return 0;
}
