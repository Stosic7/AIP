#include <stdio.h>

int main() {
    int n;
    printf("Unesi broj: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("X\n");
    } else {
        int zadnjaCifra = n % 10;
        int prvaCifra = n;
        while (prvaCifra != 0) {
            prvaCifra /= 10;
        }

        int veca = (prvaCifra > zadnjaCifra) ? prvaCifra : zadnjaCifra;
        printf("%d\n", veca);
    }

    return 0;
}
