#include <stdio.h>
#include <math.h>

int main() {
    int brTacaka, i, brTacakaUKrugu1 = 0, brTacakaUKrugu2 = 0;
    double r1, r2, x, y, r;

    printf("Unesite poluprecnik manje kruzne oblasti: ");
    scanf("%lf", &r1);
    printf("Unesite poluprecnik vece kruzne oblasti: ");
    scanf("%lf", &r2);
    printf("Unesite ukupan broj tacaka: ");
    scanf("%d", &brTacaka);

    for (i = 0; i < brTacaka; i++) {
        printf("Unesite koordinate tacke %d (x y): ", i + 1);
        scanf("%lf %lf", &x, &y);
        r = sqrt(x * x + y * y);
        if ((r >= r1 && r <= r2) && (x >= 0 && y >= 0)) {
            brTacakaUKrugu1++;
        }
        else if ((r >= r1 && r <= r2) && (x <= 0 && y <= 0)) {
            brTacakaUKrugu2++;
        }
    }

    printf("Broj tacaka u gornjoj desnoj oblasti: %d\n", brTacakaUKrugu1);
    printf("Broj tacaka u donjoj levoj oblasti: %d\n", brTacakaUKrugu2);

    return 0;
}
