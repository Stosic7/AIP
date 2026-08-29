#include <stdio.h>

int main() {
    int n;
    printf("Unesi prirodan broj: ");
    scanf("%d", &n);

    int neparniProizvod = 1;
    int parniProizvod = 1;

    int k = n;
    while (k != 0) {
        int cifra = k % 10;
        if (cifra % 2 == 0) {
            parniProizvod *= cifra;
        } else {
            neparniProizvod *= cifra;
        }
        k /= 10;
    }

    int jeNeparniKvadrat = 0;
    for (int i = 1; i * i <= neparniProizvod; i++) {
        if (i * i == neparniProizvod) {
            jeNeparniKvadrat = 1;
            break;
        }
    }

    int jeParniKvadrat = 0;
    for (int i = 1; i * i <= parniProizvod; i++) {
        if (i * i == parniProizvod) {
            jeParniKvadrat = 1;
            break;
        }
    }

    if (jeNeparniKvadrat) {
        printf("Neparni\n");
    } else if (jeParniKvadrat) {
        printf("Parni\n");
    } else {
        printf("Nema kvadrata\n");
    }

    return 0;
}
