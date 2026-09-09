#include <stdio.h>

int main() {
    int N;
    printf("Unesi N: ");
    scanf("%d", &N);

    int brojZanimljivih = 0;
    int broj;

    while (brojZanimljivih < N) {
        printf("Unesi broj: ");
        scanf("%d", &broj);

        int hiljade = broj / 1000;
        int stotice = (broj / 100) % 10;
        int desetice = (broj / 10) % 10;
        int jedinice = broj % 10;

        if (jedinice + hiljade == desetice + stotice) {
            printf("%d je zanimljiv broj\n", broj);
            brojZanimljivih++;
        } else {
            printf("%d nije zanimljiv broj\n", broj);
        }
    }

    return 0;
}
