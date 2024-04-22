#include <stdio.h>

int main() {
    int N;
    printf("Unesite dimenziju kvadratnih matrica: ");
    scanf("%d", &N);

    int B[100][100];

    int C[100][100];

    int D[100][100];

    printf("Unesite elemente matrice B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("Unesite elemente matrice C:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Element C[%d][%d]: ", i, j);
            scanf("%d", &C[i][j]);
        }
    }

    printf("Unesite elemente matrice D:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Element D[%d][%d]: ", i, j);
            scanf("%d", &D[i][j]);
        }
    }

    int A[100][100];

    // Računanje izraza A = B * C + D
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = 0;
            for (int k = 0; k < N; k++) {
                A[i][j] += B[i][k] * C[k][j];
            }
            A[i][j] += D[i][j];
        }
    }

    // Ispis rezultata
    printf("Rezultujuća matrica A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
