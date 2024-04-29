#include <stdio.h>

int main() {
    int niz[100];
    int n, i, j, broj, uzastopni, max_uzastopni;

    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    printf("Unesite elemente niza:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }

    max_uzastopni = 0;
    for (i = 0; i < n; i++) {
        broj = niz[i];
        uzastopni = 1;
        for (j = i + 1; j < n; j++) {
            if (niz[j] == broj + 1 || niz[j] == broj - 1) {
                uzastopni++;
                broj = niz[j];
            }
        }
        if (uzastopni > max_uzastopni) {
            max_uzastopni = uzastopni;
        }
    }

    printf("Najduzi uzastopni podniz ima %d elementa.\n", max_uzastopni);

    return 0;
}

