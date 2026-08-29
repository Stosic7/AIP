#include <stdio.h>
#include <stdbool.h>

int main() {

    int n;
    printf("Unesi broj: ");
    scanf("%d", &n);
    int suma1 = 0;
    int suma2 = -1;
    int maxSuma = 0;
    int maxBroj = 0;

    while (1) {
        suma1 = 0;
        
        int k = n;
        while (k != 0) {
            int trCifra = k % 10;
            suma1 += trCifra;
            k /= 10;
        }
        printf("Suma cifara broja: %d je: %d\n", n, suma1);

        if (suma1 > maxSuma) {
            maxSuma = suma1;
            maxBroj = n;
        }

        if (suma1 == suma2) break;
        suma2 = suma1;

        printf("Unesi broj: ");
        scanf("%d", &n);
    }

    printf("Broj sa najvecom sumom cifara je: %d\n", maxBroj);

    return 0;
}
