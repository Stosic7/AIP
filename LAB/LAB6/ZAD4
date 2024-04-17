#include <stdio.h>
#include <string.h>

int main() {
    char recenica[1000];
    char temp[1000];
    char poslednja_reci[1000] = "";
    int duzina, pozicija = 0;

    // Unos recenice
    printf("Unesite recenicu: ");
    fgets(recenica, sizeof(recenica), stdin);

    // Uklanjanje novog reda sa kraja recenice
    duzina = strlen(recenica);
    if (recenica[duzina - 1] == '\n') {
        recenica[duzina - 1] = '\0';
    }

    // Pronalazenje poslednje reci
    for (int i = strlen(recenica) - 1; i >= 0; i--) {
        if (recenica[i] == ' ') {
            pozicija = i + 1;
            break;
        }
    }

    // Formiranje modifikovane recenice
    strcpy(temp, recenica + pozicija);
    recenica[pozicija - 1] = '\0';
    sprintf(poslednja_reci, "%s %s", temp, recenica);

    // Prikazivanje modifikovane recenice
    printf("Modifikovana recenica: %s\n", poslednja_reci);

    return 0;
}
