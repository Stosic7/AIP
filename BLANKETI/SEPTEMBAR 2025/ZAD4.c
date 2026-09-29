#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char naziv[100];
    float cena;
    int broj_stranica;
    int godina_izdanja;
} Knjiga;

void PoredjajKnjige(Knjiga *niz, int n, int smer) {
    if (smer == 0) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (niz[i].broj_stranica > niz[j].broj_stranica) {
                    Knjiga temp = niz[i];
                    niz[i] = niz[j];
                    niz[j] = temp;
                }
            }
        }
    } else {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (niz[i].broj_stranica < niz[j].broj_stranica) {
                    Knjiga temp = niz[i];
                    niz[i] = niz[j];
                    niz[j] = temp;
                }
            }
        }
    }
}

float ProsecneCene(Knjiga *niz, int n) {
    float suma = 0;
    int brojac = 0;
    for (int i = 0; i < n; i++) {
        if (niz[i].broj_stranica >= 100 && niz[i].broj_stranica <= 999 && niz[i].godina_izdanja == 2026) {
            suma += niz[i].cena;
            brojac++;
        }
    }
    return suma / brojac;
}

int main() {
    int n;
    scanf("%d", &n);

    Knjiga *knjige = (Knjiga *)malloc(n * sizeof(Knjiga));

    for (int i = 0; i < n; i++) {
        scanf("%s %f %d %d", knjige[i].naziv, &knjige[i].cena, &knjige[i].broj_stranica, &knjige[i].godina_izdanja);
    }

    PoredjajKnjige(knjige, n, 1);
    printf("%s %d\n", knjige[0].naziv, knjige[0].godina_izdanja);
    
    float prosek = ProsecneCene(knjige, n);
    printf("%.2f\n", prosek);

    free(knjige);
    return 0;
}
