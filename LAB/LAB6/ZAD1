#include <stdio.h>

int main() {
    FILE* file;
    int broj, suma = 0, brojac = 0;

    // Otvaranje fajla za čitanje i pisanje na kraju fajla
    file = fopen("brojevi.txt", "a+");
    if (file == NULL) {
        printf("Greska pri otvaranju fajla.\n");
        return 1;
    }

    // Učitavanje brojeva iz fajla i računanje sume i brojača
    rewind(file);
    while (fscanf(file, "%d", &broj) == 1) {
        suma += broj;
        brojac++;
    }

    // Ako je broj elemenata veći od 0, izračunati aritmetičku sredinu i upisati je u fajl
    if (brojac > 0) {
        double aritmeticka_sredina = (double)suma / brojac;
        fprintf(file, "\nAritmeticka sredina: %.2lf\n", aritmeticka_sredina);
        printf("Aritmeticka sredina upisana u fajl.\n");
    }
    else {
        printf("Fajl ne sadrzi brojeve.\n");
    }

    fclose(file);
    return 0;
}
