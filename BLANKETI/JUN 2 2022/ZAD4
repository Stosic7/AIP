#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    FILE* fajl, * palindromi, * broj_reci;
    char rec[MAX_LEN];

    int broj_palindroma = 0, broj_nepalindroma = 0;

    // Otvaranje fajla "reci.txt" za čitanje
    fajl = fopen("reci.txt", "r");
    if (fajl == NULL) {
        printf("Greska pri otvaranju fajla 'reci.txt'.\n");
        return 1;
    }

    // Otvaranje fajla "palindromi.txt" za pisanje (dopisivanje na kraj)
    palindromi = fopen("palindromi.txt", "a");
    if (palindromi == NULL) {
        printf("Greska pri otvaranju fajla 'palindromi.txt'.\n");
        return 1;
    }

    // Otvaranje fajla "broj_reci.txt" za pisanje (prethodni sadržaj se briše)
    broj_reci = fopen("broj_reci.txt", "w");
    if (broj_reci == NULL) {
        printf("Greska pri otvaranju fajla 'broj_reci.txt'.\n");
        return 1;
    }

    // Čitanje reči iz fajla "reci.txt" i provera da li su palindromi
    while (fscanf(fajl, "%s", rec) != EOF) {
        int duzina = strlen(rec);
        int palindrom = 1;
        for (int i = 0; i < duzina / 2; i++) {
            if (rec[i] != rec[duzina - i - 1]) {
                palindrom = 0;
                break;
            }
        }

        // Ako je reč palindrom, upisati je u fajl "palindromi.txt"
        if (palindrom) {
            fprintf(palindromi, "%s\n", rec);
            broj_palindroma++;
        }
        else {
            broj_nepalindroma++;
        }
    }

    // Upisivanje broja palindroma i broja nepalindroma u fajl "broj_reci.txt"
    fprintf(broj_reci, "Broj palindroma: %d\n", broj_palindroma);
    fprintf(broj_reci, "Broj nepalindroma: %d\n", broj_nepalindroma);

    // Zatvaranje fajlova
    fclose(fajl);
    fclose(palindromi);
    fclose(broj_reci);

    return 0;
}
