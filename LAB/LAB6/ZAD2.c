#include <stdio.h>
#include <string.h>

int main() {
    char recenica[1000];

    // Unos recenice
    printf("Unesite recenicu: ");
    fgets(recenica, sizeof(recenica), stdin);

    FILE* file;
    // Otvaranje fajla za pisanje
    file = fopen("reci.txt", "w");
    if (file == NULL) {
        printf("Greska pri otvaranju fajla.\n");
        return 1;
    }

    // Izdvajanje reci iz recenice i upisivanje u fajl
    char* rec = strtok(recenica, " ,.-\n\t");
    while (rec != NULL) {
        fprintf(file, "%s\n", rec);
        rec = strtok(NULL, " ,.-\n\t");
    }

    printf("Reci su upisane u fajl.\n");
    fclose(file);
    return 0;
}
