#include <stdio.h>

int main() {
    int n;
    printf("Unesi ceo broj: ");
    scanf("%d", &n);

    int zbirNeparnih = 0;
    int zbirParnih = 0;
    int pozicija = 1;

    int k = n;
    while (k != 0) {
        int cifra = k % 10;
        if (pozicija % 2 != 0) {
            zbirNeparnih += cifra;
        } else {
            zbirParnih += cifra;
        }
        pozicija++;
        k /= 10;
    }

    int razlika = zbirNeparnih - zbirParnih;

    if (razlika == 0 || razlika == 11) {
        printf("Deljiv\n");
    } else {
        printf("Nedeljiv\n");
    }

    return 0;
}
