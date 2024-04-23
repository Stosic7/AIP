#include <stdio.h>

int main() {
    int A[100], B[100], C[100], D[100];
    int nA, nB, nC;
    printf("Unesite broj elemenata skupa A: ");
    scanf("%d", &nA);
    printf("Unesite elemente skupa A:\n");
    for (int i = 0; i < nA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Unesite broj elemenata skupa B: ");
    scanf("%d", &nB);
    printf("Unesite elemente skupa B:\n");
    for (int i = 0; i < nB; i++) {
        scanf("%d", &B[i]);
    }

    printf("Unesite broj elemenata skupa C: ");
    scanf("%d", &nC);
    printf("Unesite elemente skupa C:\n");
    for (int i = 0; i < nC; i++) {
        scanf("%d", &C[i]);
    }

    // Formiranje unije skupa C i preseka skupova A i B
    int D_size = 0;
    for (int i = 0; i < nC; i++) {
        D[D_size++] = C[i];
    }

    for (int i = 0; i < nA; i++) {
        int found = 0;
        for (int j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            D[D_size++] = A[i];
        }
    }

    // Prikazivanje skupa D
    printf("Skup D (C U (A \\ B)):\n");
    for (int i = 0; i < D_size; i++) {
        printf("%d ", D[i]);
    }
    printf("\n");

    return 0;
}
