#include <stdio.h>

int main() {
    int N, fib1 = 0, fib2 = 1, fib3, i, sum = 0;

    printf("Unesite broj N (N >= 3): ");
    scanf("%d", &N);

    printf("Prvih %d brojeva Fibonacijevog niza:\n", N);
    printf("%d %d ", fib1, fib2);
    sum += (fib1 % 2 == 0) ? fib1 : 0;
    sum += (fib2 % 2 == 0) ? fib2 : 0;

    for (i = 3; i <= N; i++) {
        fib3 = fib1 + fib2;
        printf("%d ", fib3);
        sum += (fib3 % 2 == 0) ? fib3 : 0;
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\nSuma parnih cifara prvih %d brojeva Fibonacijevog niza je: %d\n", N, sum);

    return 0;
}
