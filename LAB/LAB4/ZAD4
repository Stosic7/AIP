#include <stdio.h>

int main() {
    int N, M;
    printf("Unesite dimenzije matrice (N x M): ");
    scanf("%d %d", &N, &M);

    int A[100][100];

    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Sortiranje elemenata matrice po vrstama u rastući redosled
    for (int i = 0; i < N; i++) {
        // Bubble sort za svaku vrstu
        for (int j = 0; j < M - 1; j++) {
            for (int k = 0; k < M - j - 1; k++) {
                if (A[i][k] > A[i][k + 1]) {
                    int temp = A[i][k];
                    A[i][k] = A[i][k + 1];
                    A[i][k + 1] = temp;
                }
            }
        }
    }

    // Ispis rezultujuće matrice
    printf("Matrica nakon sortiranja po vrstama u rastući redosled:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
