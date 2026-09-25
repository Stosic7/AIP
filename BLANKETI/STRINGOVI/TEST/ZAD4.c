#include 

int main() {
    FILE *ulaz = fopen("input.txt", "r");
    FILE *izlaz = fopen("output.txt", "w");
    char s[300];
    char najduzaRec[100];

    if (ulaz == NULL || izlaz == NULL) {
        printf("Greska pri otvaranju fajlova!\n");
    } else {
        if (fgets(s, 300, ulaz) != NULL) {
            int i = 0;
            int maxPocetak = -1, maxDuzina = 0;

            while (s[i] != '\0') {
                while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')) {
                    i++;
                }

                if (s[i] != '\0') {
                    int pocetak = i;
                    int duzina = 0;
                    int pocinjeVelikim = (s[i] >= 'A' && s[i] <= 'Z');

                    while (s[i] != '\0' && s[i] != ' ' && s[i] != '\n' && s[i] != '\t') {
                        duzina++;
                        i++;
                    }

                    if (pocinjeVelikim && duzina > maxDuzina) {
                        maxDuzina = duzina;
                        maxPocetak = pocetak;
                    }
                }
            }

            if (maxPocetak != -1) {
                int j;
                for (j = 0; j < maxDuzina; j++) {
                    najduzaRec[j] = s[maxPocetak + j];
                }
                najduzaRec[maxDuzina] = '\0';

                fprintf(izlaz, "%s\n", najduzaRec);
                fprintf(izlaz, "%d\n", maxDuzina);
                fprintf(izlaz, "%d\n", maxPocetak);
            } else {
                fprintf(izlaz, "NEMA\n");
            }
        }
        fclose(ulaz);
        fclose(izlaz);
    }

    return 0;
}
