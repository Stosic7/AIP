#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int A[MAX_SIZE];
    int n, i, broj = 0;

    printf("Unesite broj cifara u nizu: ");
    scanf("%d", &n);

    printf("Unesite cifre niza:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        broj = broj * 10 + A[i];
    }

    if (broj % 4 != 0) {
        int broj_b = (broj / 4) * 4;
        printf("Niz B: ");
        while (broj_b > 0) {
            printf("%d ", broj_b % 10);
            broj_b /= 10;
        }
        printf("\n");
    }
    else {
        printf("Broj formiran nizom A je deljiv sa 4.\n");
    }

    return 0;
}
