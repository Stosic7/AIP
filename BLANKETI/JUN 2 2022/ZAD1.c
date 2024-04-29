#include <stdio.h>

int main() {
    int N, broj, cifra, max_cifra = 0, suma_cifara = 0, broj_prostih = 0;

    // Unos parametra N
    printf("Unesite broj N: ");
    scanf("%d", &N);

    // Unos proizvoljnih brojeva i računanje prosečne vrednosti cifara najveće težine prvih N prostih brojeva
    while (N > 0) {
        printf("Unesite broj: ");
        scanf("%d", &broj);

        // Provera da li je broj prost
        if (broj < 2) {
            continue;
        }
        int prost = 1;
        for (int i = 2; i * i <= broj; i++) {
            if (broj % i == 0) {
                prost = 0;
                break;
            }
        }
        if (!prost) {
            continue;
        }

        // Računanje cifara i pronalaženje cifre najveće težine
        int temp_broj = broj;
        while (temp_broj != 0) {
            cifra = temp_broj % 10;
            if (cifra > max_cifra) {
                max_cifra = cifra;
            }
            suma_cifara += cifra;
            temp_broj /= 10;
        }

        broj_prostih++;
        N--;
    }

    // Računanje prosečne vrednosti cifara najveće težine
    float prosecna_vrednost = broj_prostih > 0 ? (float)suma_cifara / broj_prostih : 0;

    // Ispis rezultata
    printf("Prosečna vrednost cifara najveće težine prvih %d prostih brojeva je %.2f\n", broj_prostih, prosecna_vrednost);

    return 0;
}
