#include <stdio.h>

int main() {
    int S = 0; // Suma
    int Z; // Zadati zbir
    printf("Unesite zadati zbir Z: ");
    scanf("%d", &Z);

    int broj;
    while (S < Z) {
        printf("Unesite petocifreni broj: ");
        scanf("%d", &broj);

        // Provera da li je broj petocifren i simetričan
        if (broj >= 10000 && broj <= 99999) {
            int original = broj;
            int reversed = 0;

            while (broj != 0) {
                int remainder = broj % 10;
                reversed = reversed * 10 + remainder;
                broj /= 10;
            }

            if (original == reversed) {
                S += original;
            }
            else {
                printf("Broj nije simetrican. Pokusajte ponovo.\n");
            }
        }
        else {
            printf("Broj nije petocifren. Pokusajte ponovo.\n");
        }
    }

    printf("Suma simetricnih petocifrenih brojeva je: %d\n", S);

    return 0;
}
