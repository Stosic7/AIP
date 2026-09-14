#include <stdio.h>
#include <string.h>

void pretvori_u_veliko_prvo_slovo(char *s) {
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] = s[0] - 32;
    }
}

void pretvori_u_malo_zadnje_slovo(char *s) {
    int duzina = strlen(s);

    if (duzina > 0) {
        int zadnji_indeks = duzina - 1;

        if (s[zadnji_indeks] >= 'A' && s[zadnji_indeks] <= 'Z') {
            s[zadnji_indeks] = s[zadnji_indeks] + 32;
        }
    }
}

int main() {
    char rec[] = "studenT";

    printf("Pre funkcija:  %s\n", rec);
    
    pretvori_u_veliko_prvo_slovo(rec);
    pretvori_u_malo_zadnje_slovo(rec);
    
    printf("Posle funkcija: %s\n", rec);

    return 0;
}
