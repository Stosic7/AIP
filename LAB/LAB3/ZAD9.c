#include <stdio.h>

#define MAX_SIZE 100  // Maksimalna dimenzija niza

int main() {
    int N;  // Broj elemenata niza
    int A[MAX_SIZE];  // Niz
    int M;  // Broj novih elemenata
    int new_index, new_value;  // Indeks i vrednost novog elementa
    int i, j;

    // Unos broja elemenata niza
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &N);

    // Unos elemenata niza
    printf("Unesite elemente niza:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Unos broja novih elemenata
    printf("Unesite broj novih elemenata: ");
    scanf("%d", &M);

    // Umetanje novih elemenata
    for (i = 0; i < M; i++) {
        // Unos indeksa i vrednosti novog elementa
        printf("Unesite indeks novog elementa: ");
        scanf("%d", &new_index);
        printf("Unesite vrednost novog elementa: ");
        scanf("%d", &new_value);

        // Pomeranje elemenata u desno za jedno mesto počevši od kraja niza
        for (j = N; j > new_index; j--) {
            A[j] = A[j - 1];
        }

        // Umetanje novog elementa na odgovarajuću poziciju
        A[new_index] = new_value;

        N++;  // Povećanje broja elemenata niza

        // Prikazivanje niza nakon umetanja novog elementa
        printf("Niz nakon umetanja elementa:");
        for (j = 0; j < N; j++) {
            printf(" %d", A[j]);
        }
        printf("\n");
    }

    return 0;
}
