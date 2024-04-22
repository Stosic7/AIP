#include <stdio.h>
#include <ctype.h>

int main() {
    char recenica[1000];

    // Unos recenice
    printf("Unesite recenicu: ");
    fgets(recenica, sizeof(recenica), stdin);

    // Ispravljanje recenice
    for (int i = 0; recenica[i] != '\0'; i++) {
        if (isupper(recenica[i])) {
            recenica[i] = tolower(recenica[i]);
        }
    }

    // Prikazivanje modifikovane recenice
    printf("Ispravljena recenica: %s\n", recenica);

    return 0;
}
