#include <stdio.h>

int main() {
    int N;
    printf("Unesite dimenziju kvadratne matrice: ");
    scanf("%d", &N);

    int A[100][100];

    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Računanje proizvoda matrice i njene transponovane matrice
    int B[100][100]; // Transponovana matrica
    int C[100][100]; // Proizvod matrice i njene transponovane matrice

    // Računanje transponovane matrice
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            B[i][j] = A[j][i];
        }
    }

    // Računanje proizvoda matrice i njene transponovane matrice
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Ispis rezultata
    printf("Proizvod matrice i njene transponovane matrice:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
