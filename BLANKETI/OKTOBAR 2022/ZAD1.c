#include <stdio.h>

int main() {
    int n;
    int proizvod = 1;

    printf("Unesi broj: ");
    scanf("%d", &n);

    while (n != 1) {
        if (n > 0 && n % 2 == 0) {
            int zadnjaCifra = n % 10;
            int prvaCifra = n;
            while (prvaCifra >= 10) {
                prvaCifra /= 10;
            }

            if (prvaCifra < zadnjaCifra) {
                proizvod *= n;
            }
        }

        printf("Unesi broj: ");
        scanf("%d", &n);
    }

    printf("Proizvod je: %d\n", proizvod);

    return 0;
}
