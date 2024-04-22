include <stdio.h>

#define MAX_SIZE 100  // Maksimalna dimenzija niza

int main() {
    int n;  // Dimenzija niza
    int A[MAX_SIZE];  // Niz
    int i, j, zeros_count;

    // Unos elemenata niza
    printf("Unesite dimenziju niza: ");
    scanf("%d", &n);

    printf("Unesite elemente niza:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Prikazivanje niza nakon unosa
    printf("Niz nakon unosa: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Traženje uzastopnih pojavljivanja cifre 0 i izvršavanje zamene
    zeros_count = 0;
    for (i = 0; i < n; i++) {
        if (A[i] == 0) {
            zeros_count++;
        } else {
            if (zeros_count > 1) {
                // Zamena uzastopnih pojavljivanja cifre 0 jednom cifrom 0
                A[i - zeros_count + 1] = 0;
                // Pomeranje preostalih elemenata ulevo za potrebni broj mesta
                for (j = i - zeros_count + 2; j < n; j++) {
                    A[j - zeros_count + 1] = A[j];
                }
                n -= zeros_count - 1;  // Ažuriranje dimenzije niza
                i -= zeros_count - 1;  // Ažuriranje indeksa
                zeros_count = 0;  // Resetovanje brojača
            } else {
                zeros_count = 0;  // Resetovanje brojača
            }
        }
    }

    // Prikazivanje niza nakon izmena
    printf("Niz nakon izmena: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
