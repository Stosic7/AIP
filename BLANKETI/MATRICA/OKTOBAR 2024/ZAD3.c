#include <stdio.h>
#define MAX 100

int main() {
    int n;
    int A[MAX][MAX];

    FILE* f = fopen("matrica.txt", "r");
    if (!f) {
        printf("Greska: fajl matrica.txt ne postoji.\n");
        return 1;
    }

    fscanf(f, "%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(f, "%d", &A[i][j]);
        }
    }

    fclose(f);

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
