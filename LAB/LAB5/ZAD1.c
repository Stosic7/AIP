#include <stdio.h>

int prost(int A) {
    if (A <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= A; i++) {
        if (A % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    printf("Unesite broj N: ");
    scanf("%d", &N);

    int broj, broj_prostih = 0;
    for (int i = 0; i < N; i++) {
        printf("Unesite %d. broj: ", i + 1);
        scanf("%d", &broj);
        if (prost(broj)) {
            broj_prostih++;
        }
    }

    printf("Od %d unetih brojeva, %d je prostih.\n", N, broj_prostih);

    return 0;
}
