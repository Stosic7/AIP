#include <stdio.h>

int suma_ispod_sporedne_dijagonale(int matrica[][10], int N) {
    int suma = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j < N - i - 1) {
                suma += matrica[i][j];
            }
        }
    }
    return suma;
}

int main() {
    int N;
    printf("Unesite dimenziju matrice: ");
    scanf("%d", &N);

    int B[10][10], C[10][10];

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

    int suma_B = suma_ispod_sporedne_dijagonale(B, N);
    int suma_C = suma_ispod_sporedne_dijagonale(C, N);

    printf("Suma ispod sporedne dijagonale za matricu B: %d\n", suma_B);
    printf("Suma ispod sporedne dijagonale za matricu C: %d\n", suma_C);

    if (suma_B > suma_C) {
        printf("Matrica B ima vecu sumu elemenata ispod sporedne dijagonale.\n");
    }
    else if (suma_C > suma_B) {
        printf("Matrica C ima vecu sumu elemenata ispod sporedne dijagonale.\n");
    }
    else {
        printf("Matrice B i C imaju istu sumu elemenata ispod sporedne dijagonale.\n");
    }

    return 0;
}
