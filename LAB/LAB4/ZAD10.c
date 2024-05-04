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
        for (int j = i+1; j < N; j++) { // Počinjemo od i+1 da preskočimo dijagonalu
            if (j - i <= k) {
                int temp = A[i][j];
                A[i][j] = A[i][j - k];
                A[i][j - k] = temp;
            }
        }
    }

    // Pronalaženje maksimalnog elementa ispod glavne dijagonale
    int maxElem = A[1][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j < i) {
                if (A[i][j] > maxElem)
                {

                    maxElem = A[i][j];

                }
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
    printf("Maksimalni element ispod glavne dijagonale: %d\n", maxElem+1);

    return 0;
}
