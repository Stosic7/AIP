#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrica[MAX_SIZE][MAX_SIZE];
    int N, suma_glavne = 0, suma_sporedne = 0;

    FILE* ulaz = fopen("ulaz.txt", "r");
    FILE* izlaz = fopen("izlaz.txt", "w");

    if (ulaz == NULL || izlaz == NULL) {
        printf("Greska pri otvaranju fajlova.\n");
        return 1;
    }

    fscanf(ulaz, "%d", &N);

    if (N <= 0 || N > MAX_SIZE) {
        printf("Neispravna dimenzija matrice.\n");
        fclose(ulaz);
        fclose(izlaz);
        return 1;
    }

    // Ucitavanje matrice iz ulaznog fajla
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fscanf(ulaz, "%d", &matrica[i][j]);
        }
    }

    // Racunanje sume elemenata glavne dijagonale
    for (int i = 0; i < N; i++) {
        suma_glavne += matrica[i][i];
    }

    // Racunanje sume elemenata sporedne dijagonale
    for (int i = 0; i < N; i++) {
        suma_sporedne += matrica[i][N - i - 1];
    }

    // Transformacija matrice
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || j == N - i - 1) {
                matrica[i][j] = suma_glavne + suma_sporedne;
            }
            else {
                matrica[i][j] = 0;
            }
        }
    }

    // Upisivanje transformisane matrice u izlazni fajl
    fprintf(izlaz, "%d\n", N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fprintf(izlaz, "%d ", matrica[i][j]);
        }
        fprintf(izlaz, "\n");
    }

    fclose(ulaz);
    fclose(izlaz);

    return 0;
}
