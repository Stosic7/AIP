#include <stdio.h>
#include <math.h>

int binarni_u_dekadni(int binarni[], int duzina) {
    int dekadni = 0;
    for (int i = 0; i < duzina; i++) {
        dekadni += binarni[i] * pow(2, duzina - 1 - i);
    }
    return dekadni;
}

int main() {
    int duzina;
    printf("Unesite duzinu binarnog broja: ");
    scanf("%d", &duzina);

    int binarni[100];
    printf("Unesite binarni broj (cifre od najmanje tezine ka najvecoj): ");
    for (int i = 0; i < duzina; i++) {
        scanf("%d", &binarni[i]);
    }

    printf("Dekadni ekvivalent binarnog broja: %d\n", binarni_u_dekadni(binarni, duzina));

    return 0;
}
