#include <stdio.h>

int main() {
    int niz[100];
    int n = 0;
    int broj;

    printf("Unesite cele brojeve (0 za kraj unosa): \n");
    do {
        scanf("%d", &broj);
        if (broj >= 100 && broj <= 999) {
            niz[n] = broj;
            n++;
        }
    } while (broj != 0);

    printf("Niz pre modifikacije:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        if (niz[i] != 0) {
            int prva_cifra = niz[i] / 100;
            int poslednja_cifra = niz[i] % 10;
            niz[i] = poslednja_cifra * 100 + (niz[i] / 10) % 10 * 10 + prva_cifra;
        }
    }

    printf("Niz nakon modifikacije:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    return 0;
}
