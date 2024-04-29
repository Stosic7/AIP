#include <stdio.h>

#define MAX_SIZE 100

int računajElement(int A[], int B[], int M) {
    int rezultat = 0;
    for (int i = 0; i < M; i++) {
        rezultat += A[i] * B[i];
    }
    return rezultat;
}

int main() {
    int A[MAX_SIZE], B[MAX_SIZE], C[MAX_SIZE];
    int N, M;

    printf("Unesite dimenziju niza A: ");
    scanf("%d", &N);
    printf("Unesite elemente niza A: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Unesite dimenziju niza B (manju od dimenzije niza A): ");
    scanf("%d", &M);
    printf("Unesite elemente niza B: ");
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    printf("Generisanje niza C...\n");
    for (int i = 0; i <= N - M; i++) {
        C[i] = računajElement(A + i, B, M);
    }

    printf("Niz C: ");
    for (int i = 0; i < N - M + 1; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
