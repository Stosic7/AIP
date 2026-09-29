#include <stdio.h>

#define MAX 100

int main() {
    int n;
    char niz[MAX];
    int broj_belih = 0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &niz[i]);
        if (niz[i] == 'b') {
            broj_belih++;
        }
    }

    for (int i = 0; i < broj_belih; i++) {
        niz[i] = 'b';
    }

    for (int i = broj_belih; i < n; i++) {
        niz[i] = 'c';
    }

    for (int i = 0; i < n; i++) {
        printf("%c ", niz[i]);
    }
    printf("\n");

    return 0;
}
