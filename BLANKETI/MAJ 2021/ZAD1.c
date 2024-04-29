#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, S = 0, faktorijel = 1;

    printf("Unesite prirodni broj n: ");
    scanf("%d", &n);

    printf("Unesite realni broj x: ");
    scanf("%lf", &x);

    for (int k = 1; k <= n; k++) {
        faktorijel *= k;
        S += pow(-1, k) * (pow(x, 2 + k) / faktorijel);
    }

    printf("Za n = %d i x = %.2lf suma je %.2lf.\n", n, x, S);
    if (S < 0) {
        printf("Suma je negativna.\n");
    }
    else {
        printf("Suma je pozitivna.\n");
    }

    return 0;
}
