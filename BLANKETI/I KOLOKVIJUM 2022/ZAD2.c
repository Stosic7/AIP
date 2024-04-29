#include <stdio.h>

int prost_broj(int broj) {
    if (broj < 2)
        return 0;
    for (int i = 2; i * i <= broj; i++) {
        if (broj % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N;

    // Unos dimenzije matrice
    printf("Unesite dimenziju matrice: ");
    scanf("%d", &N);

    // Unos elemenata matrice
    int matrica[100][100];
    printf("Unesite elemente matrice %dx%d:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrica[i][j]);
        }
    }

    // Zamenjivanje prostih brojeva iznad glavne i ispod sporedne dijagonale sa nulama
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i < j && i + j < N - 1 && prost_broj(matrica[i][j])) {
                matrica[i][j] = 0;
            }
        }
    }

    // Ispis matrice nakon unosa i nakon modifikacije
    printf("Matrica nakon unosa:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}
