#include <stdio.h>

#define MAX_SIZE 100

int scalar_product(int A[], int X[], int N) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i] * X[i];
    }
    return sum;
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], X[MAX_SIZE];
    int N;

    printf("Unesite dimenziju matrice: ");
    scanf("%d", &N);

    printf("Unesite matricu A[%d][%d]:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Unesite niz X[%d]:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < N; i++) {
        A[i][N - 1] = scalar_product(A[i], X, N);
    }

    printf("Matrica A nakon obrade:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
