#include <stdio.h>

void minimax(int X[], int N, int* min_indeks, int* max_indeks) {
    *min_indeks = 0;
    *max_indeks = 0;
    for (int i = 1; i < N; i++) {
        if (X[i] < X[*min_indeks]) {
            *min_indeks = i;
        }
        if (X[i] > X[*max_indeks]) {
            *max_indeks = i;
        }
    }
}

int main() {
    int N;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &N);

    int X[100];
    printf("Unesite elemente niza:\n");
    for (int i = 0; i < N; i++) {
        printf("X[%d]: ", i);
        scanf("%d", &X[i]);
    }

    int min_indeks, max_indeks;
    minimax(X, N, &min_indeks, &max_indeks);

    printf("Minimalni element niza je X[%d] = %d\n", min_indeks, X[min_indeks]);
    printf("Maksimalni element niza je X[%d] = %d\n", max_indeks, X[max_indeks]);

    return 0;
}
