#include <stdio.h>

int main() {
    int P, S = 0;
    int broj, cifra, maxCifra;

    printf("Unesite vrednost P: ");
    scanf("%d", &P);

    printf("Unesite cele brojeve, unos zavrsite sa 0:\n");

    do {
        scanf("%d", &broj);
        if (broj != 0) {
            maxCifra = -1;
            int tempBroj = broj;
            while (tempBroj != 0) {
                cifra = tempBroj % 10;
                if (cifra > maxCifra) {
                    maxCifra = cifra;
                }
                S += cifra;
                tempBroj /= 10;
            }
            printf("Cifra najvece tezine: %d\n", maxCifra);
        }
    } while (S <= P && broj != 0);

    printf("Zadata vrednost P: %d\n", P);
    printf("Ukupna suma S: %d\n", S);

    return 0;
}
