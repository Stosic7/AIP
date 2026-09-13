#include <stdio.h>
#define MAX 100

int main() {
    int n;
    int A[MAX][MAX];

    // ucitavanje dimenzije matrice sa standardnog ulaza
    printf("Unesi dimenziju matrice N: ");
    scanf("%d", &n);

    // ucitavanje elemenata matrice iz ulaznog fajla
    FILE* fIn = fopen("ulazJun22023.txt", "r");
    if (!fIn) {
        printf("Greska: fajl ulazJun22023.txt ne postoji.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(fIn, "%d", &A[i][j]);
        }
    }

    fclose(fIn);

    // sada trazimo minimalni element ispod sporedne dijagonale
    int min;
    int prvi = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1) {
                if (prvi == 1) {
                    min = A[i][j];
                    prvi = 0;
                } else if (A[i][j] < min) {
                    min = A[i][j];
                }
            }
        }
    }

    // sada menjamo sve elemente iznad glavne dijagonale nadjenim minimumom
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                A[i][j] = min;
            }
        }
    }

    // sada transponujemo matricu
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }

    // sada menjamo sve negativne elemente ekvivalentnim pozitivnim elementom
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] < 0) {
                A[i][j] = -A[i][j];
            }
        }
    }

    // sada upisujemo rezultujucu matricu u izlazni fajl
    FILE* fOut = fopen("izlazJun22023.txt", "w");
    if (!fOut) {
        printf("Greska: fajl izlazJun22023.txt nije moguce kreirati.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fprintf(fOut, "%d ", A[i][j]);
        }
        fprintf(fOut, "\n");
    }

    fclose(fOut);

    printf("Rezultat je upisan u fajl izlazJun22023.txt\n");

    return 0;
}
