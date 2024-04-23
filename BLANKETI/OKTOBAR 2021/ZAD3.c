#include <stdio.h>
#include <string.h>

int main() {
    char slovo;
    printf("Unesite slovo kojim treba poceti reci: ");
    scanf(" %c", &slovo);

    char reci[100][50]; // Lista reci
    int brojReci = 0; // Broj unetih reci

    while (1) {
        char novaRec[50];
        printf("Unesite rec (kraj za prekid): ");
        scanf("%s", novaRec);

        if (strcmp(novaRec, "kraj") == 0) {
            break;
        }

        int i;
        for (i = 0; i < brojReci; i++) {
            if (strcmp(novaRec, reci[i]) == 0) {
                printf("Rec je vec uneta.\n");
                return 1;
            }
        }

        if (novaRec[0] != slovo) {
            printf("Rec ne pocinje zadatim slovom.\n");
            return 1;
        }

        strcpy(reci[brojReci], novaRec);
        brojReci++;

        printf("Nova rec dodata.\n");
    }

    // Prikazivanje ukupnog broja unetih razlicitih reci i svih reci
    printf("Ukupan broj unetih razlicitih reci: %d\n", brojReci);
    printf("Unete reci:\n");
    for (int i = 0; i < brojReci; i++) {
        printf("%s\n", reci[i]);
    }

    return 0;
}
