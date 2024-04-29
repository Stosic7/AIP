#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int M, N;
    char gajbica[MAX_SIZE][MAX_SIZE];

    // Unos dimenzija gajbice
    printf("Unesite broj redova M: ");
    scanf("%d", &M);
    printf("Unesite broj kolona N: ");
    scanf("%d", &N);

    // Unos stanja gajbice
    printf("Unesite stanje gajbice:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf(" %c", &gajbica[i][j]);
        }
    }

    // Prikaz pocetnog stanja gajbice
    printf("Pocetno stanje gajbice:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", gajbica[i][j]);
        }
        printf("\n");
    }

    // Simulacija kvarenja narandzi
    for (int korak = 1; korak <= 3; korak++) {
        printf("Korak %d:\n", korak);

        char novaGajbica[MAX_SIZE][MAX_SIZE];
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                novaGajbica[i][j] = gajbica[i][j];
            }
        }

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (gajbica[i][j] == 'p') {
                    if (i > 0 && gajbica[i - 1][j] == 'o') {
                        novaGajbica[i - 1][j] = 'p';
                    }
                    if (i < M - 1 && gajbica[i + 1][j] == 'o') {
                        novaGajbica[i + 1][j] = 'p';
                    }
                    if (j > 0 && gajbica[i][j - 1] == 'o') {
                        novaGajbica[i][j - 1] = 'p';
                    }
                    if (j < N - 1 && gajbica[i][j + 1] == 'o') {
                        novaGajbica[i][j + 1] = 'p';
                    }
                }
            }
        }

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                gajbica[i][j] = novaGajbica[i][j];
            }
        }

        // Prikaz stanja gajbice nakon koraka
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                printf("%c ", gajbica[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
