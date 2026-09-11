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

    int polovina = n / 2;

    int zbirGornjiLevi = 0;
    int zbirGornjiDesni = 0;
    int zbirDonjiLevi = 0;
    int zbirDonjiDesni = 0;

    for (int i = 0; i < polovina; i++) {
        for (int j = 0; j < polovina; j++) {
            zbirGornjiLevi += A[i][j];
        }
    }

    for (int i = 0; i < polovina; i++) {
        for (int j = polovina; j < n; j++) {
            zbirGornjiDesni += A[i][j];
        }
    }

    for (int i = polovina; i < n; i++) {
        for (int j = 0; j < polovina; j++) {
            zbirDonjiLevi += A[i][j];
        }
    }

    for (int i = polovina; i < n; i++) {
        for (int j = polovina; j < n; j++) {
            zbirDonjiDesni += A[i][j];
        }
    }

    int maxZbir = zbirGornjiLevi;

    if (zbirGornjiDesni > maxZbir) {
        maxZbir = zbirGornjiDesni;
    }
    if (zbirDonjiLevi > maxZbir) {
        maxZbir = zbirDonjiLevi;
    }
    if (zbirDonjiDesni > maxZbir) {
        maxZbir = zbirDonjiDesni;
    }

    printf("Najveci zbir elemenata kvadranta je: %d\n", maxZbir);

    return 0;
}
