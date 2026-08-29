#include <stdio.h>

int main() {
    int n;
    printf("Unesi broj: ");
    scanf("%d", &n);

    int k = n;
    int obrnut = 0;

    while (k != 0) {
        int cifra = k % 10;
        obrnut = obrnut * 10 + cifra;
        k /= 10;
    }

    int proizvod = n * obrnut;

    printf("Obrnut broj je: %d\n", obrnut);
    printf("Proizvod je: %d\n", proizvod);

    return 0;
}
