#include <stdio.h>

#define MAX_SIZE 100

int pronadji_poziciju(int A[], int N) {
    int i;
    for (i = 1; i < N; i++) {
        if (A[i] > A[0]) {
            return i;
        }
    }
    return 0;
}

void sortiraj_niz(int A[], int N) {
    int i, j, temp;
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (A[i] < A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main() {
    int niz[MAX_SIZE];
    int N, i, pozicija;

    printf("Unesite broj elemenata niza: ");
    scanf("%d", &N);

    printf("Unesite elemente niza:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &niz[i]);
    }

    pozicija = pronadji_poziciju(niz, N);
    sortiraj_niz(niz, N);

    printf("Sortiran niz u nerastucem redosledu:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    return 0;
}
