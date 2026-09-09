#include <stdio.h>
#define MAX 100

int main() {
    int niz[MAX];
    int noviNiz[MAX];
    int n;

    printf("Unesi broj elemenata niza: ");
    scanf("%d", &n);

    printf("Unesi elemente niza:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }

    int brojNovih = 0;

    for (int i = 0; i < n; i++) {
        int imaZbir = 0;

        for (int j = 0; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (niz[j] + niz[k] == niz[i]) {
                    imaZbir = 1;
                }
            }
        }

        if (imaZbir == 1) {
            noviNiz[brojNovih] = niz[i];
            brojNovih++;
        }
    }

    printf("Novi niz:\n");
    for (int i = 0; i < brojNovih; i++) {
        printf("%d ", noviNiz[i]);
    }
    printf("\n");

    return 0;
}
