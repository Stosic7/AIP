#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int N;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &N);

    int niz[MAX_SIZE];
    printf("Unesite elemente niza:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &niz[i]);
    }

    int zbir_niz[MAX_SIZE];
    int zbir_brojeva;
    int index = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            zbir_brojeva = niz[i] + niz[j];
            for (int k = 0; k < N; k++) {
                if (zbir_brojeva == niz[k]) {
                    zbir_niz[index++] = zbir_brojeva;
                    break;
                }
            }
        }
    }

    printf("Elementi koji se mogu predstaviti kao zbir dva elementa iz niza:\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", zbir_niz[i]);
    }
    printf("\n");

    return 0;
}
