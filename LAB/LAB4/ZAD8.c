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

    // Ispis matrice pre transformacije
    printf("Matrica pre transformacije:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    int k, j;
    printf("Unesite redni broj k-te vrste koju zelite da zamenite: ");
    scanf("%d", &k);
    printf("Unesite redni broj j-te kolone koju zelite da zamenite: ");
    scanf("%d", &j);

    if (k >= N || j >= N || k < 0 || j < 0) {
        printf("Neispravan unos rednih brojeva.");
        return 1;
    }

    // Zamenjivanje mesta elementima k-te vrste i j-te kolone
    for (int i = 0; i < N; i++) {
        int temp = A[k][i];
        A[k][i] = A[i][j];
        A[i][j] = temp;
    }

    // Ispis matrice posle transformacije
    printf("Matrica posle transformacije:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
