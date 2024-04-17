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

    // Rotiranje elemenata matrice po vrstama za jedno mesto u desno
    int temp;
    for (int i = 0; i < N; i++) {
        temp = A[i][M - 1];
        for (int j = M - 1; j > 0; j--) {
            A[i][j] = A[i][j - 1];
        }
        A[i][0] = temp;
    }

    // Ispis rezultujuće matrice
    printf("Matrica nakon rotacije po vrstama za jedno mesto u desno:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
