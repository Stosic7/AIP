#include <stdio.h>

int main() {
    int N;
    int broj, suma = 0;
    int prvaCifra, poslednjaCifra;

    printf("Unesite N: ");
    scanf("%d", &N);

    printf("Unesite cele brojeve, unos zavrsite brojem cija je prva cifra veca od poslednje:\n");

    do {
        scanf("%d", &broj);

        // Provera da li je broj N-cifren
        int tempBroj = broj;
        int cifre = 0;
        while (tempBroj != 0) {
            cifre++;
            tempBroj /= 10;
        }

        if (cifre == N) {
            // Izdvajanje prve i poslednje cifre broja
            prvaCifra = broj;
            while (prvaCifra >= 10) {
                prvaCifra /= 10;
            }
            poslednjaCifra = broj % 10;

            // Provera uslova za sumiranje
            if (prvaCifra <= poslednjaCifra) {
                suma += broj;
            }
        }
    } while (prvaCifra <= poslednjaCifra);

    printf("Suma celih %d-cifrenih brojeva je: %d\n", N, suma);

    return 0;
}
