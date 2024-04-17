#include <stdio.h>
#include <math.h>

double exp(double x, double E) {
    double suma = 1.0;
    double clan = 1.0;
    int n = 1;

    while (fabs(clan) >= E) {
        clan = clan * x / n;
        suma += clan;
        n++;
    }

    return suma;
}

int main() {
    double x, E;
    printf("Unesite vrednost x: ");
    scanf("%lf", &x);
    printf("Unesite vrednost E: ");
    scanf("%lf", &E);

    double rezultat = exp(x, E);
    printf("Vrednost sume exp(%lf) je: %lf\n", x, rezultat);

    return 0;
}
