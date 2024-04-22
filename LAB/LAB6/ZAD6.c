#include <stdio.h>

int main() {
    FILE* file;
    int binarna_cifra;
    int dekadna_vrednost = 0;

    // Otvaranje fajla za čitanje
    file = fopen("binarne-cifre.txt", "r");
    if (file == NULL) {
        printf("Greska pri otvaranju fajla.\n");
        return 1;
    }

    // Učitavanje binarnih cifara i računanje dekadne vrednosti
    while (fscanf(file, "%d", &binarna_cifra) != EOF) {
        dekadna_vrednost = dekadna_vrednost * 2 + binarna_cifra;
    }

    // Prikazivanje dekadne vrednosti
    printf("Dekadna vrednost binarnog broja iz fajla: %d\n", dekadna_vrednost);

    // Zatvaranje fajla
    fclose(file);

    return 0;
}
