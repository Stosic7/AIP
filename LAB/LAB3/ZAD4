#include <stdio.h>

#define MAX_SIZE 100  // Maksimalna dimenzija niza

int main() {
    int N;  // Broj elemenata niza
    int A[MAX_SIZE];  // Niz
    float avg = 0.0;  // Prosečna vrednost elemenata
    int count = 0;  // Broj elemenata manjih od prosečne vrednosti
    int i;

    // Unos broja elemenata niza
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &N);

    // Unos elemenata niza
    printf("Unesite elemente niza:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        avg += A[i];  // Dodavanje vrednosti za izračunavanje proseka
    }

    // Izračunavanje prosečne vrednosti elemenata
    avg /= N;

    // Prikazivanje prosečne vrednosti elemenata
    printf("Prosečna vrednost elemenata niza: %.2f\n", avg);

    // Pronalaženje broja elemenata manjih od prosečne vrednosti
    for (i = 0; i < N; i++) {
        if (A[i] < avg) {
            count++;
        }
    }

    // Prikazivanje broja elemenata manjih od prosečne vrednosti
    printf("Broj elemenata manjih od prosečne vrednosti: %d\n", count);

    // Prikazivanje elemenata koji ispunjavaju uslov
    printf("Elementi koji su manji od prosečne vrednosti:\n");
    for (i = 0; i < N; i++) {
        if (A[i] < avg) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");

    return 0;
}
