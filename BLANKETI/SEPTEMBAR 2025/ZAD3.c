#include <stdio.h>

int main() {
    int m, n;
    float B[100][100];
    float A[100][100];

    FILE *fajl = fopen("ulaz.txt", "r");
    
    fscanf(fajl, "%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(fajl, "%f", &B[i][j]);
        }
    }
    fclose(fajl);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int desni_sused_j = j + 1;
            if (j == n - 1) {
                desni_sused_j = 0;
            }
            A[i][j] = (B[i][j] + B[i][desni_sused_j]) / 2.0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
