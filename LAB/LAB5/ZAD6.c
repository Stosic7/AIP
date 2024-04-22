#include <stdio.h>
#include <stdlib.h>

void sortiranje(int niz[], int duzina, int smer) {
    if (smer == 0) { // nerastući redosled
        for (int i = 0; i < duzina - 1; i++) {
            for (int j = i + 1; j < duzina; j++) {
                if (niz[i] < niz[j]) {
                    int temp = niz[i];
                    niz[i] = niz[j];
                    niz[j] = temp;
                }
            }
        }
    }
    else if (smer == 1) { // neopadajući redosled
        for (int i = 0; i < duzina - 1; i++) {
            for (int j = i + 1; j < duzina; j++) {
                if (niz[i] > niz[j]) {
                    int temp = niz[i];
                    niz[i] = niz[j];
                    niz[j] = temp;
                }
            }
        }
    }
}

int main() {
    int duzina;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &duzina);

    int niz[100];
    printf("Unesite elemente niza:\n");
    for (int i = 0; i < duzina; i++) {
        printf("niz[%d]: ", i);
        scanf("%d", &niz[i]);
    }

    printf("Niz pre sortiranja:\n");
    for (int i = 0; i < duzina; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    sortiranje(niz, duzina, 0); // Sortiranje u nerastući redosled
    printf("Niz posle sortiranja u nerastuci redosled:\n");
    for (int i = 0; i < duzina; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    sortiranje(niz, duzina, 1); // Sortiranje u neopadajući redosled
    printf("Niz posle sortiranja u neopadajuci redosled:\n");
    for (int i = 0; i < duzina; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    return 0;
}
