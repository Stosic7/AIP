#include <stdio.h>
#include <stdbool.h>

int main() {
    char karakter;
    int cifra = 0, rezultat = 0;
    bool unosCifre = false, unosOperacije = false;

    do {
        karakter = getchar();

        if (karakter >= '0' && karakter <= '9') {
            cifra = cifra * 10 + (karakter - '0');
            unosCifre = true;
        }
        else if (karakter == '+' || karakter == '-') {
            if (unosCifre) {
                if (unosOperacije) {
                    printf("Dve aritmeticke operacije zaredom. Prekid programa.\n");
                    return 1;
                }
                if (!unosOperacije) {
                    rezultat += cifra;
                    cifra = 0;
                    unosOperacije = true;
                }
            }
            else {
                printf("Greska u unosu. Prekid programa.\n");
                return 1;
            }
        }
        else if (karakter != '\n') {
            printf("Neispravan unos. Prekid programa.\n");
            return 1;
        }

    } while (karakter != '\n');

    printf("Rezultat: %d\n", rezultat);

    return 0;
}
