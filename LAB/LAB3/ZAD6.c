#include <stdio.h>

int main() {
    int N;  // Dimenzija niza
    int longest_sequence = 1;  // Dužina najduže sortirane sekvence
    int current_sequence = 1;  // Dužina trenutne sortirane sekvence
    int i;

    // Unos dimenzije niza
    printf("Unesite dimenziju niza: ");
    scanf("%d", &N);

    // Unos elemenata niza
    int A[100];
    printf("Unesite elemente niza:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Pronalaženje najduže sortirane sekvence
    for (i = 1; i < N; i++) {
        if (A[i] >= A[i - 1]) {
            current_sequence++;
        }
        else {
            if (current_sequence > longest_sequence) {
                longest_sequence = current_sequence;
            }
            current_sequence = 1;
        }
    }
    if (current_sequence > longest_sequence) {
        longest_sequence = current_sequence;
    }

    // Prikazivanje dužine najduže sortirane sekvence
    printf("Dužina najduže sortirane sekvence: %d\n", longest_sequence);

    return 0;
}
