#include <stdio.h>
#define MAX 100

int main() {
    int n;
    int A[MAX][MAX];

    printf("Unesi dimenziju matrice N: ");
    scanf("%d", &n);

    printf("Unesi elemente matrice A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int zbirIznad = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                zbirIznad += A[i][j];
            }
        }
    }

    int proizvodIspod = 1;
    int postojiElement = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j && (i + j) % 2 == 0) {
                proizvodIspod *= A[i][j];
                postojiElement = 1;
            }
        }
    }

    if (postojiElement == 0) {
        proizvodIspod = 0;
    }

    int razlika = zbirIznad - proizvodIspod;
    if (razlika < 0) {
        razlika = -razlika;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                A[i][j] += razlika;
            }
        }
    }

    printf("Matrica nakon transformacije:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
