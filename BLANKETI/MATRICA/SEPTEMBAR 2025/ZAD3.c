#include <stdio.h>
#define MAX 100

int main() {
    int m, n;
    double B[MAX][MAX];
    double A[MAX][MAX];

    FILE* f = fopen("ulaz.txt", "r");
    if (!f) {
        printf("Greska: fajl ulaz.txt ne postoji.\n");
        return 1;
    }

    fscanf(f, "%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(f, "%lf", &B[i][j]);
        }
    }

    fclose(f);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int sledecaKolona = j + 1;
            if (sledecaKolona == n) {
                sledecaKolona = 0;
            }
            A[i][j] = (B[i][j] + B[i][sledecaKolona]) / 2.0;
        }
    }

    printf("Matrica A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
