#include <stdio.h>
#include <string.h>

int main() {
    FILE* file;
    char rec[100];
    char linija[1000];
    int pronadjeno = 0;

    // Otvaranje fajla za čitanje
    file = fopen("tekst.txt", "r");
    if (file == NULL) {
        printf("Greska pri otvaranju fajla.\n");
        return 1;
    }

    // Unos reči za pretragu
    printf("Unesite rec koju zelite da proverite: ");
    scanf("%s", rec);

    // Pretraga teksta za zadatom reči
    while (fgets(linija, sizeof(linija), file) != NULL) {
        if (strstr(linija, rec) != NULL) {
            pronadjeno = 1;
            break;
        }
    }

    // Prikazivanje rezultata pretrage
    if (pronadjeno) {
        printf("Rec '%s' se nalazi u tekstu.\n", rec);
    }
    else {
        printf("Rec '%s' se ne nalazi u tekstu.\n", rec);
    }

    // Zatvaranje fajla
    fclose(file);

    return 0;
}
