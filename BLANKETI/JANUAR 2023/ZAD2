#include <stdio.h>

#define MAX_LEN 100

int main() {
    int N, A[MAX_LEN], B[MAX_LEN], suma = 0, broj_elemenata = 0;

    // Unos dimenzije niza
    printf("Unesite dimenziju niza: ");
    scanf("%d", &N);

    // Unos elemenata niza A
    printf("Unesite elemente niza A:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        suma += A[i];
        broj_elemenata++;
    }

    // Računanje prosečne vrednosti svih elemenata niza A
    float prosecna_vrednost = broj_elemenata > 0 ? (float)suma / broj_elemenata : 0;

    // Formiranje niza B
    int broj_neprostih = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] <= 1) {
            B[i] = A[i];
        }
        else {
            int prost = 1;
            for (int j = 2; j * j <= A[i]; j++) {
                if (A[i] % j == 0) {
                    prost = 0;
                    break;
                }
            }
            if (prost) {
                B[i] = A[i];
            }
            else {
                B[i] = A[i] + prosecna_vrednost;
                broj_neprostih++;
            }
        }
    }

    // Prikazivanje niza B
    printf("Niz B nakon formiranja:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
