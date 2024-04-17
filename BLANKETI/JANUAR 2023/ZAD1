#include <stdio.h>

int main() {
    int broj, cifra, max_cifra, suma = 0;

    // Petlja za unos brojeva i računanje sume
    do {
        printf("Unesite broj: ");
        scanf("%d", &broj);

        if (broj == 0) {
            break;
        }

        max_cifra = 0;
        while (broj != 0) {
            cifra = broj % 10;
            if (cifra > max_cifra) {
                max_cifra = cifra;
            }
            broj /= 10;
        }

        if (max_cifra % 2 == 0) {
            suma += max_cifra;
        }

    } while (1);

    // Ispis sume
    printf("Suma brojeva cija je cifra najvece tezine parna: %d\n", suma);

    return 0;
}
