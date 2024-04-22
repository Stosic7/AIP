#include <stdio.h>

int main() {
    int N, i, j, sum, cifra, prost;

    printf("Unesite broj N: ");
    scanf("%d", &N);

    printf("Trocifreni brojevi manji od %d ciji je zbir cifara prost broj su:\n", N);
    for (i = 100; i < N && i < 1000; i++) {
        sum = 0;
        j = i;
        prost = 1;

        while (j > 0) {
            cifra = j % 10;
            sum += cifra;
            j /= 10;
        }

        for (j = 2; j * j <= sum; j++) {
            if (sum % j == 0) {
                prost = 0;
                break;
            }
        }

        if (prost && sum > 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
