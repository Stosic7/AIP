#include <stdio.h>
#include <stdlib.h>

int main() {
    int M;
    printf("Unesite dimenziju matrice M: ");
    scanf("%d", &M);

    // Alokacija memorije za niz fib
    int* fib = (int*)malloc(M * M * sizeof(int));
    if (fib == NULL) {
        printf("Greska pri alokaciji memorije.\n");
        return 1;
    }

    fib[0] = 1;
    fib[1] = 1;

    // Popunjavanje Fibonačijevog niza
    for (int i = 2; i < M * M; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Alokacija memorije za matricu
    int** matrica = (int**)malloc(M * sizeof(int*));
    if (matrica == NULL) {
        printf("Greska pri alokaciji memorije.\n");
        return 1;
    }

    for (int i = 0; i < M; i++) {
        matrica[i] = (int*)malloc(M * sizeof(int));
        if (matrica[i] == NULL) {
            printf("Greska pri alokaciji memorije.\n");
            return 1;
        }
    }

    // Popunjavanje matrice elementima Fibonačijevog niza po kolonama
    int brojac = 0;
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < M; i++) {
            matrica[i][j] = fib[brojac++];
        }
    }

    // Prikazivanje matrice
    printf("Matrica sa elementima Fibonačijevog niza:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d\t", matrica[i][j]);
        }
        printf("\n");
    }

    // Oslobađanje alocirane memorije
    free(fib);
    for (int i = 0; i < M; i++) {
        free(matrica[i]);
    }
    free(matrica);

    return 0;
}
