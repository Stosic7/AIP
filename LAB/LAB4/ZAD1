#include <stdio.h>

int main() {
    int N;
    printf("Unesite dimenziju matrice (N x N): ");
    scanf("%d", &N);

    int A[100][100];

    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matrica A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    int suma = 0, proizvod = 1;

    // Računanje sume ispod glavne dijagonale
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            suma += A[i][j];
        }
    }

    // Računanje proizvoda ispod sporedne dijagonale
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            proizvod *= A[i][j];
        }
    }

    printf("Suma elemenata ispod glavne dijagonale: %d\n", suma);
    printf("Proizvod elemenata ispod sporedne dijagonale: %d\n", proizvod);

    return 0;
}
