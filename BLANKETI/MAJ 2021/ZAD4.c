#include <stdio.h>

#define MAX_SIZE 100

void MagicanCaroban(int niz[], int size) {
    for (int i = 0; i < size; i++) {
        int broj = niz[i];
        int cifra = broj % 10;
        
        if (cifra == 0 || broj % cifra == 0) {
            niz[i] = 0; // Magican broj
        } else if (broj % 2 == 0 && i % 2 != 0) {
            niz[i] = 1; // Caroban broj
        }
    }
}

int main() {
    int matrica[MAX_SIZE][MAX_SIZE];
    int M, N;

    printf("Unesite dimenzije kvadratne matrice (MxN): ");
    scanf("%d", &M);
    N = M;

    printf("Unesite elemente matrice ispod sporedne dijagonale:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (j < N - 1 - i) {
                scanf("%d", &matrica[i][j]);
            } else {
                matrica[i][j] = 0; // Postavljamo nulu ispod sporedne dijagonale
            }
        }
    }

    printf("Unesite elemente prve kolone matrice:\n");
    for (int i = 0; i < M; i++) {
        scanf("%d", &matrica[i][0]); // Unosimo elemente u prvu kolonu
    }

    // Transformacija matrice koriscenjem funkcije MagicanCaroban
    for (int i = 0; i < M; i++) {
        MagicanCaroban(matrica[i], N);
    }

    // Prikaz transformisane matrice
    printf("Transformisana matrica:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}
