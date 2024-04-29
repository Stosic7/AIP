#include <stdio.h>

int main() {
    int N;

    // Unos broja N
    printf("Unesite broj N: ");
    scanf("%d", &N);

    int minZbir = 20; // Maximalna moguća vrednost za sumu cifara (9+9)
    int brojSaMinZbirom = 0;

    // Učitavanje i obrada brojeva
    for (int i = 0; i < N; i++) {
        int broj;
        printf("Unesite %d. broj: ", i + 1);
        scanf("%d", &broj);

        // Izračunavanje zbira prve i poslednje cifre
        int prvaCifra = broj;
        while (prvaCifra >= 10) {
            prvaCifra /= 10;
        }

        int poslednjaCifra = broj % 10;
        int zbirCifara = prvaCifra + poslednjaCifra;

        // Provera da li je zbir manji od trenutnog minimuma
        if (zbirCifara < minZbir) {
            minZbir = zbirCifara;
            brojSaMinZbirom = broj;
        }
    }

    // Prikaz rezultata
    printf("Broj sa najmanjim zbirom prve i poslednje cifre: %d\n", brojSaMinZbirom);

    return 0;
}
