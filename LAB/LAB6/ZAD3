#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char recenica[1000];
    int k;
    int brojac[26] = { 0 }; // Brojac pojavljivanja svakog slova

    // Unos recenice
    printf("Unesite recenicu: ");
    fgets(recenica, sizeof(recenica), stdin);

    // Unos vrednosti k
    printf("Unesite vrednost k: ");
    scanf("%d", &k);

    // Brojanje pojavljivanja svakog slova u recenici
    for (int i = 0; i < strlen(recenica); i++) {
        if (isalpha(recenica[i])) {
            brojac[tolower(recenica[i]) - 'a']++;
        }
    }

    // Prikazivanje slova koja se javljaju k ili više puta
    printf("Slova koja se javljaju %d ili vise puta:\n", k);
    for (int i = 0; i < 26; i++) {
        if (brojac[i] >= k) {
            printf("%c ", 'a' + i);
        }
    }
    printf("\n");

    return 0;
}
