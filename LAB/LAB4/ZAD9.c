#include <stdio.h>

int main() {
    int N, M;
    printf("Unesite dimenzije matrice (N M): ");
    scanf("%d %d", &N, &M);

    int A[100][100];

    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Pronalaženje kolone sa najmanjim zbirom elemenata
    int minSum = 0;
    int minCol = 0;

    for (int j = 0; j < M; j++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += A[i][j];
        }
        if (j == 0 || sum < minSum) {
            minSum = sum;
            minCol = j;
        }
    }

    // Ispis rezultata
    printf("Kolona sa najmanjim zbirom elemenata:\n");
    for (int i = 0; i < N; i++) {
        printf("%d\n", A[i][minCol]);
    }

    return 0;
}
