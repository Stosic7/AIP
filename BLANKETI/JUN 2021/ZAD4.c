#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int polje[MAX_SIZE][MAX_SIZE];
    int M, i, j, x = 0, y = 0, skokovi = 0, kupus = 0;
    char skok;

    FILE* file = fopen("skokovi.txt", "r");
    if (file == NULL) {
        printf("Greska prilikom otvaranja fajla.");
        return 1;
    }

    printf("Unesite dimenziju polja MxM: ");
    scanf("%d", &M);

    printf("Unesite vrednosti polja:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &polje[i][j]);
        }
    }

    while (fscanf(file, " %c", &skok) == 1) {
        switch (skok) {
        case 'U':
            if (x > 0) {
                x--;
                skokovi++;
                if (polje[x][y] == 0) {
                    kupus++;
                }
            }
            break;
        case 'D':
            if (x < M - 1) {
                x++;
                skokovi++;
                if (polje[x][y] == 0) {
                    kupus++;
                }
            }
            break;
        case 'L':
            if (y > 0) {
                y--;
                skokovi++;
                if (polje[x][y] == 0) {
                    kupus++;
                }
            }
            break;
        case 'R':
            if (y < M - 1) {
                y++;
                skokovi++;
                if (polje[x][y] == 0) {
                    kupus++;
                }
            }
            break;
        default:
            printf("Nepoznata komanda %c, preskacem.\n", skok);
        }
    }

    fclose(file);

    printf("Zeka je pojeo %d kupusa posle %d skokova.\n", kupus, skokovi);

    return 0;
}
