#include <stdio.h>

int main() {
    int N, M, i, j, k, found;

    // Unos veličine niza A
    printf("Unesite broj elemenata niza A: ");
    scanf("%d", &N);

    // Unos elemenata niza A
    int A[100];
    printf("Unesite elemente niza A:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Unos veličine podniza P
    printf("Unesite broj elemenata podniza P: ");
    scanf("%d", &M);

    // Unos elemenata podniza P
    int P[100];
    printf("Unesite elemente podniza P:\n");
    for (i = 0; i < M; i++) {
        scanf("%d", &P[i]);
    }

    // Brisanje prvog pojavljivanja podniza P iz niza A
    found = 0;
    for (i = 0; i < N - M + 1 && !found; i++) {
        found = 1;
        int found_temp = 1;
        for (j = 0, k = i; j < M; j++, k++) {
            if (A[k] != P[j]) {
                found_temp = 0;
                break;
            }
        }
        if (found_temp) {
            // Pomeranje elemenata niza A za M mesta ulevo počevši od pozicije i+M
            for (j = i + M; j < N; j++) {
                A[j - M] = A[j];
            }
            // Smanjenje dužine niza A za M
            N -= M;
        }
        else {
            found = 0; // Ako podniz P nije pronađen, resetujemo found
        }
    }

    // Ispis niza A nakon modifikacije
    printf("Rezultat nakon brisanja podniza P iz niza A:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
