#include <stdio.h>
#include <stdlib.h>

int* delioci(int B, int* duzina) {
    int* rezultat = (int*)malloc(B * sizeof(int));
    if (rezultat == NULL) {
        *duzina = 0;
        return NULL;
    }

    int j = 0;
    for (int i = 1; i <= B; i++) {
        if (B % i == 0) {
            rezultat[j] = i;
            j++;
        }
    }

    *duzina = j;
    return rezultat;
}

int main() {
    int B;
    printf("Unesite prirodan broj: ");
    scanf("%d", &B);

    int duzina;
    int* rezultat = delioci(B, &duzina);

    if (rezultat == NULL) {
        printf("Neuspesna alokacija memorije.\n");
        return 1;
    }

    printf("Delioci broja %d su: ", B);
    for (int i = 0; i < duzina; i++) {
        printf("%d ", rezultat[i]);
    }
    printf("\n");

    free(rezultat);

    return 0;
}
