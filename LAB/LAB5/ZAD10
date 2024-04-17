#include <stdio.h>

void transponuj_matricu(int matrica[][10], int N) {
    int temp;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            temp = matrica[i][j];
            matrica[i][j] = matrica[j][i];
            matrica[j][i] = temp;
        }
    }
}

int main() {
    int N;
    printf("Unesite dimenziju matrice: ");
    scanf("%d", &N);

    int matrica[10][10];

    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrica[i][j]);
        }
    }

    printf("Uneta matrica:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    transponuj_matricu(matrica, N);

    printf("Transponovana matrica:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}
