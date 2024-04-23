#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr_pustinja, * fptr_mapa;
    int dimenzija;

    // Otvori fajl "pustinja.txt" za čitanje
    fptr_pustinja = fopen("pustinja.txt", "r");
    if (fptr_pustinja == NULL) {
        printf("Greska pri otvaranju fajla pustinja.txt\n");
        return 1;
    }

    // Učitaj dimenziju kvadratne matrice
    fscanf(fptr_pustinja, "%d", &dimenzija);

    // Deklaracija i alokacija matrice za pustinju
    int** pustinja = (int**)malloc(dimenzija * sizeof(int*));
    if (pustinja == NULL) {
        printf("Greska pri alokaciji memorije.\n");
        return 1;
    }

    for (int i = 0; i < dimenzija; i++) {
        pustinja[i] = (int*)malloc(dimenzija * sizeof(int));
        if (pustinja[i] == NULL) {
            printf("Greska pri alokaciji memorije.\n");
            return 1;
        }
    }

    // Učitaj elemente matrice pustinje
    for (int i = 0; i < dimenzija; i++) {
        for (int j = 0; j < dimenzija; j++) {
            fscanf(fptr_pustinja, "%d", &pustinja[i][j]);
        }
    }

    // Zatvori fajl "pustinja.txt"
    fclose(fptr_pustinja);

    // Kreiranje mape za putanju
    int trenutni_red = 0;
    int trenutna_kolona = 0;

    // Otvori fajl "mapa.txt" za pisanje
    fptr_mapa = fopen("mapa.txt", "w");
    if (fptr_mapa == NULL) {
        printf("Greska pri otvaranju fajla mapa.txt\n");
        return 1;
    }

    fprintf(fptr_mapa, "(%d, %d)\n", trenutni_red, trenutna_kolona);

    while (1) {
        // Pronađi susedno polje čija je vrednost za 1 veća
        int nova_vrednost = pustinja[trenutni_red][trenutna_kolona] + 1;
        int pronadjeno = 0;
        if (trenutni_red + 1 < dimenzija && pustinja[trenutni_red + 1][trenutna_kolona] == nova_vrednost) {
            trenutni_red++;
            pronadjeno = 1;
        }
        else if (trenutna_kolona + 1 < dimenzija && pustinja[trenutni_red][trenutna_kolona + 1] == nova_vrednost) {
            trenutna_kolona++;
            pronadjeno = 1;
        }

        if (!pronadjeno) {
            // Ako nije pronadjeno susedno polje, lampa je zakopana na trenutnom polju
            break;
        }

        // Upisivanje trenutne pozicije u mapu
        fprintf(fptr_mapa, "(%d, %d)\n", trenutni_red, trenutna_kolona);
    }

    // Zatvori fajl "mapa.txt"
    fclose(fptr_mapa);

    printf("Mapa putanje sačuvana u fajlu mapa.txt\n");

    // Oslobodi alociranu memoriju
    for (int i = 0; i < dimenzija; i++) {
        free(pustinja[i]);
    }
    free(pustinja);

    return 0;
}
