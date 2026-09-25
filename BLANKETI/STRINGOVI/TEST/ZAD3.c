#include <stdio.h>

int duzina_stringa(char *s) {
    int d = 0;
    while (s[d] != '\0' && s[d] != '\n') {
        d++;
    }
    return d;
}


int je_palindrom(char *s) {
    int levi = 0;
    int desni = duzina_stringa(s) - 1;

    while (levi < desni) {
        if (s[levi] != s[desni]) {
            return 0;
        }
        levi++;
        desni--;
    }
    return 1;
}

int main(void) {
    FILE *ulaz = fopen("ulaz.txt", "r");
    FILE *izlaz = fopen("izlaz.txt", "w");
    char rec[100];

    if (ulaz == NULL || izlaz == NULL) {
        printf("Greska pri otvaranju fajlova!\n");
    } else {
        while (fscanf(ulaz, "%s", rec) == 1) {
            if (je_palindrom(rec)) {
                fprintf(izlaz, "%s - JESTE\n", rec);
            } else {
                fprintf(izlaz, "%s - NIJE\n", rec);
            }
        }
        fclose(ulaz);
        fclose(izlaz);
    }

    return 0;
}
