#include <stdio.h>
#include <string.h>

int je_palindrom(char *s) {
    int levi = 0;
    int desni = strlen(s) - 1;

    while (levi < desni) {
        if (s[levi] != s[desni]) {
            return 0;
        }
        levi++;
        desni--;
    }
    return 1;
}

int main() {
    char recenica[] = "ana voli milovana i ima oko koje vidi";
    char delim[] = " ,.!?";

    char *token = strtok(recenica, delim);

    printf("Pronađeni palindromi u rečenici:\n");
    while (token != NULL) {
        if (je_palindrom(token)) {
            printf("- %s\n", token);
        }
        token = strtok(NULL, delim);
    }

    return 0;
}
