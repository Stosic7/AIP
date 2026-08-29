#include <stdio.h>

int main() {
    int n;
    int A = 0;
    int B = 0;

    printf("Unesi broj: ");
    scanf("%d", &n);

    while (1) {
        int ukupnaSuma = 0;
        int k = n;
        while (k != 0) {
            ukupnaSuma += k % 10;
            k /= 10;
        }

        int zadnjaCifra = n % 10;
        int prvaCifra = n;
        while (prvaCifra >= 10) {
            prvaCifra /= 10;
        }
        printf("prva cifra: %d\n", prvaCifra);

        int sumaKrajnjih = prvaCifra + zadnjaCifra;
        int sumaOstalih = ukupnaSuma - sumaKrajnjih;

        if (sumaKrajnjih == sumaOstalih) {
            break;
        } else if (sumaKrajnjih > sumaOstalih) {
            A += n;
        } else {
            B += n;
        }

        printf("Unesi broj: ");
        scanf("%d", &n);
    }

    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
