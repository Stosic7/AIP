#include <stdio.h>

#define N 5  // Dimenzija niza

int main() {
    int A[N];  // Niz
    int i, j, temp;
    float avg = 0.0;  // Prosečna vrednost elemenata

    // Unos elemenata niza
    printf("Unesite elemente niza:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        avg += A[i];  // Dodavanje vrednosti za izračunavanje proseka
    }

    // Prikazivanje niza pre uređivanja
    printf("Niz pre uredjivanja: ");
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Sortiranje elemenata niza u opadajući redosled
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (A[i] < A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // Prikazivanje niza posle uredjivanja
    printf("Niz posle uredjivanja: ");
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Izračunavanje prosečne vrednosti elemenata
    avg /= N;

    // Prikazivanje prosečne vrednosti elemenata
    printf("Prosečna vrednost elemenata: %.2f\n", avg);

    return 0;
}
