#include <stdio.h>
#include <string.h>

int main() {
    FILE* ulaz, * izlaz;
    char recenica[1000];
    int m;

    // Otvaranje fajlova za citanje i pisanje
    ulaz = fopen("recenice.txt", "r");
    izlaz = fopen("sadrze.txt", "w");
    if (ulaz == NULL || izlaz == NULL) {
        printf("Greska pri otvaranju fajlova.\n");
        return 1;
    }

    // Unos vrednosti m
    printf("Unesite vrednost m: ");
    scanf("%d", &m);

    // Ucitavanje i obrada recenica
    while (fgets(recenica, sizeof(recenica), ulaz) != NULL) {
        // Uklanjanje novog reda sa kraja recenice
        int duzina = strlen(recenica);
        if (recenica[duzina - 1] == '\n') {
            recenica[duzina - 1] = '\0';
        }
        // Provera duzine recenice i upis u izlazni fajl ako je duza od m
        if (strlen(recenica) > m) {
            fprintf(izlaz, "%s\n", recenica);
        }
    }

    // Zatvaranje fajlova
    fclose(ulaz);
    fclose(izlaz);

    printf("Recenice sa vise od %d karaktera upisane u fajl 'sadrze.txt'.\n", m);

    return 0;
}
