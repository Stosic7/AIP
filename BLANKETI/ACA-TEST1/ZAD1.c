#include <stdio.h>

int main() {
    int broj;
    int suma = 0;

    printf("Unesi broj: ");
    scanf("%d", &broj);

    while (broj != 0) {
        int zadnjaCifra = broj % 10;
        int prvaCifra = broj;

        while (prvaCifra > 9) {
            prvaCifra /= 10;
        }

        if (prvaCifra > zadnjaCifra) {
            suma += broj;
        } else {
            suma -= broj;
        }

        printf("Unesi broj: ");
        scanf("%d", &broj);
    }

    printf("Suma je: %d\n", suma);

    return 0;
}
