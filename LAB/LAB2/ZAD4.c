#include <stdio.h>

int main() {
    int K, i, cifra, sum;

    printf("Unesite broj K: ");
    scanf("%d", &K);

    printf("Trocifreni brojevi ciji je zbir cifara jednak 17 i deljivi sa %d su:\n", K);
    for (i = 100; i < 1000; i++) {
        sum = 0;
        int broj = i;
        while (broj > 0) {
            cifra = broj % 10;
            sum += cifra;
            broj /= 10;
        }
        if (sum == 17 && i % K == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
