#include <stdio.h>

int main() {
    FILE* f;
    int N, M, i, j, temp;

    // Otvaranje fajla za čitanje
    f = fopen("matrica.txt", "r");
    if (f == NULL) {
        printf("Greska prilikom otvaranja fajla.\n");
        return 1;
    }

    // Čitanje dimenzija matrice
    fscanf(f, "%d %d", &N, &M);

    int matrica[100][100];

    // Čitanje elemenata matrice
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            fscanf(f, "%d", &matrica[i][j]);
        }
    }

    // Uređivanje elemenata svake vrste u nerastućem redosledu
    for (i = 0; i < N; i++) {
        // Sortiranje trenutne vrste
        for (j = 0; j < M - 1; j++) {
            for (int k = j + 1; k < M; k++) {
                if (matrica[i][j] < matrica[i][k]) {
                    // Zamena elemenata ako su u pogrešnom redosledu
                    temp = matrica[i][j];
                    matrica[i][j] = matrica[i][k];
                    matrica[i][k] = temp;
                }
            }
        }
    }

    // Zatvaranje fajla
    fclose(f);

    // Prikazivanje matrice nakon transformacije
    printf("Matrica nakon transformacije:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}
