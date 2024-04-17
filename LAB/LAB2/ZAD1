#include <stdio.h>

int main() {
    int N, i, j;
    printf("Unesite broj N: ");
    scanf("%d", &N);

    printf("Prosti brojevi manji od %d su:\n", N);
    for (i = 2; i < N; i++) {
        int prime = 1;  // Pretpostavljamo da je i prost broj
        for (j = 2; j <= i / 2 && prime; j++) {
            if (i % j == 0) {
                prime = 0;  // i nije prost broj
            }
        }
        if (prime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
