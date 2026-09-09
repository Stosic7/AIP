#include <stdio.h>
#define MAX 100

int main() {
    int niz[MAX];
    int n;

    printf("Unesi broj elemenata niza: ");
    scanf("%d", &n);

    printf("Unesi elemente niza:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }

    int neopadajuciNarusen = 0;
    int nerastuciNarusen = 0;

    for (int i = 0; i < n - 1; i++) {
        if (niz[i] > niz[i + 1]) {
            neopadajuciNarusen = 1;
        }
        if (niz[i] < niz[i + 1]) {
            nerastuciNarusen = 1;
        }
    }

    if (neopadajuciNarusen == 0) {
        printf("Niz je uredjen u neopadajucem redosledu.\n");
    } else if (nerastuciNarusen == 0) {
        printf("Niz je uredjen u nerastucem redosledu.\n");
    } else {
        printf("Niz nije uredjen. Uredjen niz u neopadajucem redosledu:\n");

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (niz[j] < niz[i]) {
                    int temp = niz[i];
                    niz[i] = niz[j];
                    niz[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", niz[i]);
        }
        printf("\n");
    }

    return 0;
}
