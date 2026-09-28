#include <stdio.h>
#include <stdlib.h>

void ZameniVrste(int **matrica, int n) {
    int i, j, privremeni;
    int indeksMaks = 0;
    int maksSuma = -1;

    for (i = 0; i < n; i++) {
        int trenutnaSuma = 0;
        for (j = 0; j < n; j++) {
            trenutnaSuma += matrica[i][j];
        }
        if (trenutnaSuma > maksSuma) {
            maksSuma = trenutnaSuma;
            indeksMaks = i;
        }
    }

    if (indeksMaks != 0) {
        for (j = 0; j < n; j++) {
            privremeni = matrica[0][j];
            matrica[0][j] = matrica[indeksMaks][j];
            matrica[indeksMaks][j] = privremeni;
        }
    }
}

int main() {
    FILE *fajl;
    int n, i, j;
    int **matrica;

    fajl = fopen("ulaz.txt", "r");
    if (fajl == NULL) {
        return 1;
    }

    fscanf(fajl, "%d", &n);

    matrica = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++) {
        matrica[i] = (int*)malloc(n * sizeof(int));
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            fscanf(fajl, "%d", &matrica[i][j]);
        }
    }
    fclose(fajl);

    ZameniVrste(matrica, n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        free(matrica[i]);
    }
    free(matrica);

    return 0;
}
