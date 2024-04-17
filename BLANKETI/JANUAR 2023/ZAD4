#include <stdio.h>

#define MAX_DIM 10

int main() {
    FILE* fprva, * fdruga, * frezultat;
    int A[MAX_DIM][MAX_DIM], B[MAX_DIM][MAX_DIM], C[MAX_DIM][MAX_DIM], D[MAX_DIM][MAX_DIM];
    int n, m, k, l, x, y, z;

    // Otvaranje fajlova za čitanje
    fprva = fopen("prva_matrica.txt", "r");
    if (fprva == NULL) {
        printf("Greska pri otvaranju fajla 'prva_matrica.txt'.\n");
        return 1;
    }

    fdruga = fopen("druga_matrica.txt", "r");
    if (fdruga == NULL) {
        printf("Greska pri otvaranju fajla 'druga_matrica.txt'.\n");
        return 1;
    }

    // Ucitavanje dimenzija i elemenata matrica
    fscanf(fprva, "%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fscanf(fprva, "%d", &A[i][j]);
        }
    }

    fscanf(fdruga, "%d %d", &k, &l);
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < l; j++) {
            fscanf(fdruga, "%d", &B[i][j]);
        }
    }

    fclose(fprva);
    fclose(fdruga);

    // Unos dimenzija podmatrica
    printf("Unesite dimenzije podmatrica C i D (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    // Provera uslova
    if (x >= n || y >= m || y >= k || z >= l) {
        printf("Greska: Neispravne dimenzije podmatrica.\n");
        return 1;
    }

    // Kopiranje podmatrica
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            C[i][j] = A[i][j];
        }
    }

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < z; j++) {
            D[i][j] = B[i][j];
        }
    }

    // Mnozenje matrica C i D
    int rezultat[MAX_DIM][MAX_DIM] = { 0 };
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < z; j++) {
            for (int k = 0; k < y; k++) {
                rezultat[i][j] += C[i][k] * D[k][j];
            }
        }
    }

    // Otvaranje fajla za pisanje rezultata
    frezultat = fopen("rezultat.txt", "w");
    if (frezultat == NULL) {
        printf("Greska pri otvaranju fajla 'rezultat.txt'.\n");
        return 1;
    }

    // Upisivanje rezultata u fajl
    fprintf(frezultat, "%d %d\n", x, z);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < z; j++) {
            fprintf(frezultat, "%d ", rezultat[i][j]);
        }
        fprintf(frezultat, "\n");
    }

    fclose(frezultat);

    printf("Mnozenje uspesno zavrseno. Rezultat sacuvan u 'rezultat.txt'.\n");

    return 0;
}
