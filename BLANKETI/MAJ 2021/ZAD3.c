#include <stdio.h>
#include <ctype.h>

int main() {
    char recenica[1000];
    char poslednja_reci[100];
    int i, j = 0;

    printf("Unesite recenicu: ");
    fgets(recenica, sizeof(recenica), stdin);

    // Pronalazak poslednje reci u recenici
    for (i = 0; recenica[i] != '\0'; i++) {
        if (isspace(recenica[i])) {
            j = 0; // Resetujemo indeks za cuvanje reci
        }
        else {
            poslednja_reci[j] = recenica[i];
            j++;
        }
    }
    poslednja_reci[j] = '\0'; // Dodajemo null terminator na kraj reci

    // Upis poslednje reci u fajl
    FILE* file = fopen("zadatak3.txt", "w");
    if (file == NULL) {
        printf("Greska pri otvaranju fajla.\n");
        return 1;
    }
    fprintf(file, "%s", poslednja_reci);
    fclose(file);

    printf("Poslednja rec u recenici je: %s\n", poslednja_reci);

    return 0;
}
