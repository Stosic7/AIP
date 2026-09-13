#include <stdio.h>
#define MAX 100

int main() {
    int n;
    int A[MAX][MAX];

    FILE* f = fopen("matricaJun22024.txt", "r");
    if (!f) {
        printf("Greska: fajl matricaJun22024.txt ne postoji.\n");
        return 1;
    }

    fscanf(f, "%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(f, "%d", &A[i][j]);
        }
    }

    fclose(f);

    int min;
    int max;
    int prviMin = 1;
    int prviMax = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                if (prviMin == 1) {
                    min = A[i][j];
                    prviMin = 0;
                } else if (A[i][j] < min) {
                    min = A[i][j];
                }
            }

            if (i + j > n - 1) {
                if (prviMax == 1) {
                    max = A[i][j];
                    prviMax = 0;
                } else if (A[i][j] > max) {
                    max = A[i][j];
                }
            }
        }
    }

    printf("Minimalni element iznad glavne dijagonale je: %d\n", min);
    printf("Maksimalni element ispod sporedne dijagonale je: %d\n", max);

    return 0;
}
