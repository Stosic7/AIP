#include <stdio.h>

int main() {
    int N, i, j, faktorijel, faktorijel_kvadrata;

    printf("Unesite broj N: ");
    scanf("%d", &N);

    printf("Faktorijeli prvih %d prirodnih brojeva i njihovih kvadrata su:\n", N);
    for (i = 1; i <= N; i++) {
        faktorijel = 1;
        faktorijel_kvadrata = 1;
        for (j = 1; j <= i; j++) {
            faktorijel *= j;
            faktorijel_kvadrata *= j * j;
        }
        printf("%d! = %d, (%d^2)! = %d\n", i, faktorijel, i, faktorijel_kvadrata);
    }

    return 0;
}
