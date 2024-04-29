#include <stdio.h>

int main() {
    int broj, ukupnoBrojeva = 0, brojevaSaParanSumomCifara = 0;

    printf("Unesite cele brojeve, unos zavrsite sa 0:\n");

    do {
        scanf("%d", &broj);
        if (broj != 0) {
            int suma = 0;
            int tempBroj = broj;
            while (tempBroj != 0) {
                suma += tempBroj % 10;
                tempBroj /= 10;
            }
            ukupnoBrojeva++;
            if (suma % 2 == 0) {
                brojevaSaParanSumomCifara++;
            }
        }
    } while (broj != 0);

    printf("Ukupno brojeva sa parnom sumom cifara: %d\n", brojevaSaParanSumomCifara);
    printf("Ukupno unetih brojeva: %d\n", ukupnoBrojeva);

    return 0;
}
