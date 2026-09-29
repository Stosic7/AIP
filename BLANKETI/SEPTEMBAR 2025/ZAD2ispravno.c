#include <stdio.h>

#define MAX 100

int main() {
    int n;
    char niz[MAX];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &niz[i]);
    }

    int levi = 0;
    int desni = n - 1;
    
    while (levi < desni) {
        while (levi < desni && niz[levi] == 'b') {
            levi++;
        }
        while (levi < desni && niz[desni] == 'c') {
            desni--;
        }
        if (levi < desni) {
            char temp = niz[levi];
            niz[levi] = niz[desni];
            niz[desni] = temp;
            levi++;
            desni--;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%c ", niz[i]);
    }
    printf("\n");

    return 0;
}
