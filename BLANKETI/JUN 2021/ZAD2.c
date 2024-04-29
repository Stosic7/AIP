#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int niz[MAX_SIZE];
    int N, i, j, temp, max, min, max_index, min_index;

    printf("Unesite broj elemenata niza: ");
    scanf("%d", &N);

    printf("Unesite elemente niza:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &niz[i]);
    }

    for (i = 0; i < N; i += 2) {
        max = niz[i];
        max_index = i;
        for (j = i + 1; j < N; j++) {
            if (niz[j] > max) {
                max = niz[j];
                max_index = j;
            }
        }
        temp = niz[i];
        niz[i] = max;
        niz[max_index] = temp;
    }

    for (i = 1; i < N; i += 2) {
        min = niz[i];
        min_index = i;
        for (j = i + 1; j < N; j++) {
            if (niz[j] < min) {
                min = niz[j];
                min_index = j;
            }
        }
        temp = niz[i];
        niz[i] = min;
        niz[min_index] = temp;
    }

    printf("Niz nakon uredjivanja:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    return 0;
}
