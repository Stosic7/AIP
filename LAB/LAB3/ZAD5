#include <stdio.h>

#define N 5  // Dimenzija niza
#define K 2  // Broj mesta za pomeranje ulevo

int main() {
    int A[N] = {1, 2, 3, 4, 5};  // Inicijalizacija niza
    int temp[K];  // Privremeni niz za čuvanje elemenata koji se pomeraju

    // Prikazivanje niza A pre uređivanja
    printf("Niz A pre pomeranja: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Pomeranje elemenata ulevo
    for (int i = 0; i < K; i++) {
        temp[i] = A[i];  // Čuvanje prvih K elemenata u privremenom nizu
    }

    for (int i = 0; i < N - K; i++) {
        A[i] = A[i + K];  // Pomeranje preostalih elemenata ulevo
    }

    for (int i = N - K, j = 0; i < N; i++, j++) {
        A[i] = temp[j];  // Povratak čuvanih elemenata na kraj niza
    }

    // Prikazivanje niza A posle uređivanja
    printf("Niz A posle pomeranja: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
