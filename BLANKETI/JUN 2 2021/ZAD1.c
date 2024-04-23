#include <stdio.h>

int main() {
    int N;
    printf("Unesite broj N: ");
    scanf("%d", &N);

    int brojac = 0;
    while (brojac < N) {
        int broj;
        printf("Unesite cetvorocifreni broj: ");
        scanf("%d", &broj);

        int cifra_jedinice = broj % 10;
        int cifra_desetice = (broj / 10) % 10;
        int cifra_stotine = (broj / 100) % 10;
        int cifra_hiljade = broj / 1000;

        if (cifra_jedinice + cifra_hiljade == cifra_desetice + cifra_stotine) {
            printf("%d je zanimljiv broj.\n", broj);
            brojac++;
        }
        else {
            printf("%d nije zanimljiv broj.\n", broj);
        }
    }

    return 0;
}
