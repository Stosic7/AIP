#include <stdio.h>

int main() {
    int N, k;
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

    // Ispis matrice pre transformacije
    printf("Matrica pre transformacije:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Unesite vrednost k: ");
    scanf("%d", &k);

    // Modifikacija matrice
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j > i) {
                int temp = A[i][N - 1];
                for (int l = N - 1; l > i; l--) {
                    A[i][l] = A[i][l - 1];
                }
                A[i][i] = temp;
            }
        }
    }

    // Pronalaženje maksimalnog elementa ispod glavne dijagonale
    int maxElem = A[1][0];
    for (int i = 2; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (A[i][j] > maxElem) {
                maxElem = A[i][j];
            }
        }
    }


    // Ispis matrice posle transformacije
    printf("Matrica posle transformacije:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Ispis maksimalnog elementa ispod glavne dijagonale
    printf("Maksimalni element ispod glavne dijagonale: %d\n", maxElem);

    return 0;
}
