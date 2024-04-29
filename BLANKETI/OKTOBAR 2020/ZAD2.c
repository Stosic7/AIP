#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int A[MAX_SIZE];
    int N;

    printf("Unesite duzinu niza: ");
    scanf("%d", &N);

    printf("Unesite elemente niza:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Provera da li je niz uređen u nerastućem ili neopadajućem redosledu
    int neopadajuci = 1;
    int nerastuci = 1;
    for (int i = 0; i < N - 1; i++) {
        if (A[i] > A[i + 1]) {
            neopadajuci = 0;
        }
        if (A[i] < A[i + 1]) {
            nerastuci = 0;
        }
    }

    if (neopadajuci) {
        printf("Niz je vec uređen u neopadajućem redosledu.\n");
    }
    else if (nerastuci) {
        printf("Niz je vec uređen u nerastućem redosledu.\n");
    }
    else {
        // Uređivanje niza u neopadajući redosled
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (A[i] > A[j]) {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }

        printf("Niz nije uređen. Uređeni niz:\n");
        for (int i = 0; i < N; i++) {
            printf("%d ", A[i]);
        }
        printf("\n");
    }

    return 0;
}
