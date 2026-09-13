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

    int vrstaMaxZbir = 0;
    int maxZbirParnih = -1;

    int vrstaMinProizvod = 0;
    int minProizvodNeparnih = -1;

    for (int i = 0; i < n; i++) {
        int zbirParnih = 0;
        int proizvodNeparnih = 1;

        for (int j = 0; j < n; j++) {
            if (A[i][j] % 2 == 0) {
                zbirParnih += A[i][j];
            } else {
                proizvodNeparnih *= A[i][j];
            }
        }

        if (zbirParnih > maxZbirParnih) {
            maxZbirParnih = zbirParnih;
            vrstaMaxZbir = i;
        }

        if (minProizvodNeparnih == -1 || proizvodNeparnih < minProizvodNeparnih) {
            minProizvodNeparnih = proizvodNeparnih;
            vrstaMinProizvod = i;
        }
    }

    if (vrstaMaxZbir != vrstaMinProizvod) {
        for (int j = 0; j < n; j++) {
            int temp = A[vrstaMaxZbir][j];
            A[vrstaMaxZbir][j] = A[vrstaMinProizvod][j];
            A[vrstaMinProizvod][j] = temp;
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
