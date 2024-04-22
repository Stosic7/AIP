#include <stdio.h>

int main() {
    int N, K;
    printf("Unesite velicinu niza: ");
    scanf("%d", &N);

    printf("Unesite broj mesta za pomeranje: ");
    scanf("%d", &K);

    int A[100], temp[100]; // Inicijalizacija nizova

    // Unos elemenata niza A
    printf("Unesite elemente niza A:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Prikazivanje niza A pre pomeranja
    printf("Niz A pre pomeranja: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Pomeranje elemenata ulevo
    for (int i = 0; i < K; i++) {
        temp[i] = A[i]; // Čuvanje prvih K elemenata u privremenom nizu
    }

    for (int i = 0; i < N - K; i++) {
        A[i] = A[i + K]; // Pomeranje preostalih elemenata ulevo
    }

    for (int i = N - K, j = 0; i < N; i++, j++) {
        A[i] = temp[j]; // Povratak čuvanih elemenata na kraj niza
    }

    // Prikazivanje niza A posle pomeranja
    printf("Niz A posle pomeranja: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
