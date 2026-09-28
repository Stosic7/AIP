int main() {
    char s[MAX];
    int trazenaDuzina;

    printf("Unesite recenicu:\n");
    fgets(s, MAX, stdin);

    int duzinaNiza = strlen(s);

    printf("Unesite trazenu duzinu palindroma: ");
    scanf("%d", &trazenaDuzina);

    int indeks = 0;
    char kopija[MAX];
    strcpy(kopija, s);

    char separatori[] = " ,.!?;:\n\t";
    char* trenutnaRec = strtok(kopija, separatori);

    while (trenutnaRec != NULL) {
        int duzina = strlen(trenutnaRec);

        if (duzina == trazenaDuzina) {
            int jePalindrom = 1;
            int pocetni = 0;
            int krajnji = duzina - 1;

            while (pocetni < krajnji) {
                if (trenutnaRec[pocetni] != trenutnaRec[krajnji]) {
                    jePalindrom = 0;
                }
                pocetni++;
                krajnji--;
            }
            
            if (jePalindrom == 1) {
                char *pozicija = strstr(s, trenutnaRec);
                while (&s[indeks] != pozicija) {
                    indeks++;
                }
            }
        }

        trenutnaRec = strtok(NULL, separatori);
    }

    if (indeks == 0) {
        printf("Nije pronadjen palindrom");
    } else {
        printf("%d\n", indeks);
    }

    return 0;
}
