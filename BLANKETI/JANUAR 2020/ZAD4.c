#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int N;

    // Učitavanje dimenzije matrice
    FILE* f = fopen("matrica.txt", "r");
    fscanf(f, "%d", &N);

    // Učitavanje matrice iz fajla
    int matrica[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fscanf(f, "%d", &matrica[i][j]);
        }
    }
    fclose(f);

    // Zamena elemenata glavne dijagonale
    for (int i = 0; i < N; i++) {
        int max = matrica[i][i];
        int maxIdx = i;
        // Pronalaženje maksimalnog elementa u trenutnoj vrsti
        for (int j = 0; j < N; j++) {
            if (matrica[i][j] > max) {
                max = matrica[i][j];
                maxIdx = j;
            }
        }
        // Zamena elemenata
        int tmp = matrica[i][i];
        matrica[i][i] = max;
        matrica[i][maxIdx] = tmp;
    }

    // Zamena elemenata sporedne dijagonale
    for (int i = 0; i < N; i++) {
        int min = matrica[i][N - 1 - i];
        int minIdx = N - 1 - i;
        // Pronalaženje minimalnog elementa u trenutnoj koloni
        for (int j = 0; j < N; j++) {
            if (matrica[j][N - 1 - i] < min) {
                min = matrica[j][N - 1 - i];
                minIdx = j;
            }
        }
        // Zamena elemenata
        int tmp = matrica[i][N - 1 - i];
        matrica[i][N - 1 - i] = min;
        matrica[minIdx][N - 1 - i] = tmp;
    }

    // Prikaz rezultujuće matrice
    printf("Rezultujuca matrica:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}
