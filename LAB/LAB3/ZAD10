#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int N, niz[100], M, i, j, ind; // deklaracija promenljivih.

    printf("Unesite broj elemenata niza: \n");
    scanf("%d", &N); // Unosimo broj el. niza.

    printf("Unesite elemente niza: \n");
    for (i = 0; i < N; i++) {
        scanf("%d", &niz[i]); // unosimo elemente niza.
    }

    printf("Elementi niza: \n");
    for (i = 0; i < N; i++) {
        printf("%d ", niz[i]); // prikazujemo pocetni niz.
    }

    printf("\nUnesite broj elemenata niza za brisanje: \n");
    scanf("%d", &M); // unosimo broj el. za brisanje iz niza

    for (i = 0; i < M; i++) // for petlja koja ide od 0 do broja M (broj koji oznacava koliko elemenata brisemo)
    {

        printf("\nUnesite indeks broja koji zelite da bude obrisan: \n");
        scanf("%d", &ind); // ind = idneks, unosimo indeks elemenata koji treba da se obrise iz niza

        for (j = ind; j < N-1; j++) // for petlja koja ide od tog indeksa do kraja niza.
        {

            niz[j] = niz[j + 1]; // logika za brisanje, bukvalno pomeramo sve brojeve za jedno mesto u desno, tako se brise element iz niza.

        }

        N--; // umanjujemo broj elemenata pocetnog niza za 1, jer smo obrisali jedan element iz njega.

        printf("Niz nakon brisanja: \n");
        for (j = 0; j < N; j++) {
            printf("%d ", niz[j]); // stampano novi niz sa obrisanim brojem.
        }

    }

    return 0;
}
