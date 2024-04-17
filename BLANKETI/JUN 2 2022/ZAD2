#include <stdio.h>

int main() {
    int N;

    // Unos dimenzije matrice
    printf("Unesite dimenziju matrice: ");
    scanf("%d", &N);

    // Unos elemenata matrice
    int A[100][100], R[100][100];
    printf("Unesite elemente matrice %dx%d:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Kreiranje matrice R
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int suma = 0, brojac = 0;
            for (int k = 0; k < N; k++) {
                suma += A[i][k]; // Suma elemenata vrste
                suma += A[k][j]; // Suma elemenata kolone
                brojac += 2; // Broj elemenata u vrsti i koloni
            }
            R[i][j] = suma / brojac; // Prosečna vrednost
        }
    }

    // Ispis matrice A
    printf("Matrica A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Ispis matrice R
    printf("Kreirana matrica R:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}
