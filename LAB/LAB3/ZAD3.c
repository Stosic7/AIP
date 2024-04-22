#include <stdio.h>

#define MAX_SIZE 100  // Maksimalna dimenzija niza

int main() {
    int A[MAX_SIZE];  // Niz
    int V;  // Zadata vrednost
    int N = 0;  // Broj unetih elemenata
    int sum = 0;  // Zbir vrednosti elemenata
    float avg = 0.0;  // Prosečna vrednost elemenata
    int i;

    // Unos zadate vrednosti
    printf("Unesite zadatu vrednost V: ");
    scanf("%d", &V);

    // Unos elemenata niza sve dok zbir ne postane veći od V
    while (sum <= V && N < MAX_SIZE) {
        printf("Unesite sledeci element niza: ");
        scanf("%d", &A[N]);
        sum += A[N];
        N++;
    }

    // Prikazivanje broja unetih elemenata i samog niza
    printf("Broj unetih elemenata N: %d\n", N);
    printf("Uneti niz A: ");
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Izračunavanje i prikazivanje zbira i prosečne vrednosti elemenata
    for (i = 0; i < N; i++) {
        avg += A[i];
    }
    avg /= N;
    printf("Zbir vrednosti elemenata niza: %d\n", sum);
    printf("Prosečna vrednost elemenata niza: %.2f\n", avg);

    return 0;
}
