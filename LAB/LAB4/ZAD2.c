#include <stdio.h>

int main() {
    int A[100][100], N, M, l, s;
    printf("Unesite dimenzije matrice (N x M): ");
    scanf("%d %d", &N, &M);

    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Unesite l-tu i s-tu vrstu za zamenu (0 <= l, s < %d): ", N);
    scanf("%d %d", &l, &s);

    if (l >= N || s >= N || l < 0 || s < 0) {
        printf("Neispravan unos vrsta.");
        return 1;
    }

    // Zamena vrsti
    int temp[100];
    for (int j = 0; j < M; j++) {
        temp[j] = A[l][j];
        A[l][j] = A[s][j];
        A[s][j] = temp[j];
    }

    // Zamena negativnih elemenata sa 0
    for (int j = 0; j < M; j++) {
        if (A[l][j] < 0) {
            A[l][j] = 0;
        }
        if (A[s][j] < 0) {
            A[s][j] = 0;
        }
    }

    printf("Matrica nakon zamene vrsti:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
