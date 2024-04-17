#include <stdio.h>
#include <string.h>

int main() {
    char recenica[1000];
    char trazena_rec[100];
    int brojac = 0;
    char* p;

    // Unos recenice
    printf("Unesite recenicu: ");
    fgets(recenica, sizeof(recenica), stdin);

    // Uklanjanje novog reda sa kraja recenice
    int duzina = strlen(recenica);
    if (recenica[duzina - 1] == '\n') {
        recenica[duzina - 1] = '\0';
    }

    // Unos trazene reci
    printf("Unesite rec koju trazite: ");
    scanf("%s", trazena_rec);

    // Pretraga recenice za trazenom reci
    p = strstr(recenica, trazena_rec);
    while (p != NULL) {
        brojac++;
        p = strstr(p + 1, trazena_rec);
    }

    // Prikazivanje rezultata
    printf("Rec '%s' se pojavljuje %d puta u recenici.\n", trazena_rec, brojac);

    return 0;
}
