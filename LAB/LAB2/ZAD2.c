#include <stdio.h>

int main() {
    int N, i, fib1 = 0, fib2 = 1, nextTerm, sum = 0, count = 0;

    printf("Unesite broj N (N >= 3): ");
    scanf("%d", &N);

    while (count < N) {
        nextTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextTerm;

        if (nextTerm % 2 == 0) {
            sum += nextTerm;
            count++;
        }
    }

    printf("Suma prvih %d parnih clanova Fibonacijevog niza je: %d\n", N, sum);

    return 0;
}
