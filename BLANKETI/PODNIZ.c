#include <stdio.h>
#define MAX 100

int main() {
    int niz[MAX], podniz[MAX];
    int n, m;

    printf("Unesi duzinu niza: ");
    scanf("%d", &n);
    printf("Unesi elemente niza:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }

    printf("Unesi duzinu podniza: ");
    scanf("%d", &m);
    printf("Unesi elemente podniza:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &podniz[i]);
    }

    int pozicija = -1;

    for (int i = 0; i <= n - m && pozicija == -1; i++) {
        int imaPodniz = 1;

        for (int j = 0; j < m && imaPodniz == 1; j++) {
            if (niz[i + j] != podniz[j]) {
                imaPodniz = 0;
            }
        }

        if (imaPodniz == 1) {
            pozicija = i;
        }
    }

    if (pozicija != -1) {
        printf("Podniz postoji, pocinje od pozicije: %d\n", pozicija + 1);
    } else {
        printf("Podniz ne postoji u nizu.\n");
    }

    return 0;
}
