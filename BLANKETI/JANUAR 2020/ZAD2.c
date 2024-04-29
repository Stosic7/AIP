#include <stdio.h>

int main() {
    int N;

    // Unos broja N
    printf("Unesite duzinu niza: ");
    scanf("%d", &N);

    // Unos elemenata niza
    int A[100];
    printf("Unesite elemente niza:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Izračunavanje prosečne vrednosti
    float suma = 0;
    for (int i = 0; i < N; i++) {
        suma += A[i];
    }
    float prosecnaVrednost = suma / N;

    // Ažuriranje elemenata niza
    for (int i = 0; i < N; i++) {
        A[i] -= prosecnaVrednost;
    }

    // Prikaz niza nakon unosa i izmena
    printf("Niz nakon unosa i izmena:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
