#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char naziv[50];
    int visina;
    int starost;
    int listopadno;
} Drvo;

void Sortiraj(Drvo *niz, int n) {
    int i, j;
    Drvo privremena;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (niz[i].visina < niz[j].visina) {
                privremena = niz[i];
                niz[i] = niz[j];
                niz[j] = privremena;
            }
        }
    }
}

int ProsecnaVisinaPoredjenje(Drvo *niz, int n) {
    int i;
    int sumaListopadno = 0, brojacListopadno = 0;
    int sumaZimzeleno = 0, brojacZimzeleno = 0;
    double prosekListopadno, prosekZimzeleno;

    for (i = 0; i < n; i++) {
        if (niz[i].listopadno == 1) {
            sumaListopadno += niz[i].visina;
            brojacListopadno++;
        } else {
            sumaZimzeleno += niz[i].visina;
            brojacZimzeleno++;
        }
    }

    prosekListopadno = (double)sumaListopadno / brojacListopadno;
    prosekZimzeleno = (double)sumaZimzeleno / brojacZimzeleno;

    if (prosekListopadno > prosekZimzeleno) {
        return 1;
    }
    return 0;
}

int main() {
    int n, i;
    Drvo *niz;

    scanf("%d", &n);

    niz = (Drvo*)malloc(n * sizeof(Drvo));

    for (i = 0; i < n; i++) {
        scanf("%s %d %d %d", niz[i].naziv, &niz[i].visina, &niz[i].starost, &niz[i].listopadno);
    }

    Sortiraj(niz, n);

    printf("%s %d\n", niz[0].naziv, niz[0].visina);

    if (ProsecnaVisinaPoredjenje(niz, n) == 1) {
        printf("Prosecna visina listopadnog drveca jeste veca od prosecne visine zimzelenog drveca.\n");
    } else {
        printf("Prosecna visina listopadnog drveca nije veca od prosecne visine zimzelenog drveca.\n");
    }

    free(niz);

    return 0;
}
