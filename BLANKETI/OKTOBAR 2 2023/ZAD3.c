#include <stdio.h>

void izbaci_elemente(int* X, int* N, int n, int m) {
    if (n >= *N || m >= *N || n > m) {
        printf("Neispravni parametri.\n");
        return;
    }
    int i, j;
    for (i = n, j = m + 1; j < *N; ++i, ++j) {
        X[i] = X[j];
    }
    *N -= (m - n + 1);
}

int main() {
    int M, A[100], l, p, i;

    printf("Unesite duzinu niza A: ");
    scanf("%d", &M);

    printf("Unesite elemente niza A:\n");
    for (i = 0; i < M; ++i) {
        scanf("%d", &A[i]);
    }

    printf("Unesite vrednosti l i p: ");
    scanf("%d %d", &l, &p);

    izbaci_elemente(A, &M, l, p);

    printf("Niz A nakon izbacivanja elemenata:\n");
    for (i = 0; i < M; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
