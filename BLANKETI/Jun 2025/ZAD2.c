#include <stdio.h>
#define MAX 100

int main() {
    int niz[MAX];
    int n;

    printf("Unesi duzinu niza: ");
    scanf("%d", &n);

    printf("Unesi elemente niza:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }

    int sumaParnih = 0;
    int brojParnih = 0;

    for (int i = 0; i < n; i++) {
        if (niz[i] % 2 == 0) {
            sumaParnih += niz[i];
            brojParnih++;
        }
    }

    double prosek = (double) sumaParnih / brojParnih;

    int novaDuzina = 0;

    for (int i = 0; i < n; i++) {
        int neparanVeciOdProseka = (niz[i] % 2 != 0) && (niz[i] > prosek);
        if (!neparanVeciOdProseka) {
            niz[novaDuzina] = niz[i];
            novaDuzina++;
        }
    }

    for (int i = 0; i < novaDuzina; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", niz[i]);
    }
    printf("\n");

    return 0;
}
