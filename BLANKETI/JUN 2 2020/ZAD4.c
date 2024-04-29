#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int N;
    int matrica[MAX_SIZE][MAX_SIZE];
    FILE* fajl;

    // Otvaranje fajla za čitanje
    fajl = fopen("matrica.txt", "r");
    if (fajl == NULL) {
        printf("Greska pri otvaranju fajla.\n");
        return 1;
    }

    // Učitavanje dimenzije matrice
    fscanf(fajl, "%d", &N);

    // Učitavanje matrice iz fajla
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fscanf(fajl, "%d", &matrica[i][j]);
        }
    }

    // Zatvaranje fajla
    fclose(fajl);

    // Pronalaženje i prikaz vrsta matrice čija je suma veća od sume na sporednoj dijagonali
    printf("Vrste matrice sa sumom vecom od sume na sporednoj dijagonali:\n");
    for (int i = 0; i < N; i++) {
        int sumaVrste = 0;
        for (int j = 0; j < N; j++) {
            sumaVrste += matrica[i][j];
        }
        int sumaSporedneDijagonale = 0;
        for (int j = 0; j < N; j++) {
            sumaSporedneDijagonale += matrica[j][N - j - 1];
        }
        if (sumaVrste > sumaSporedneDijagonale) {
            printf("Vrsta %d\n", i + 1);
        }
    }

    return 0;
}
