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

    // Sortiranje elemenata matrice po kolonama u opadajući redosled
    for (int j = 0; j < M; j++) {
        // Selection sort za svaku kolonu
        for (int i = 0; i < N - 1; i++) {
            int max_idx = i;
            for (int k = i + 1; k < N; k++) {
                if (A[k][j] > A[max_idx][j]) {
                    max_idx = k;
                }
            }
            // Zamena elemenata
            int temp = A[i][j];
            A[i][j] = A[max_idx][j];
            A[max_idx][j] = temp;
        }
    }

    // Ispis rezultujuće matrice
    printf("Matrica nakon sortiranja po kolonama u opadajući redosled:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
