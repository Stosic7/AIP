#include <stdio.h>
#include <string.h>

// Opciono: Funkcija za nadovezivanje stringova
void nadovezi(char* dest, const char* src) {
    while (*dest) {
        dest++;
    }
    while ((*dest++ = *src++));
}

int main() {
    char string1[100];
    char string2[100];

    // Unos prvog stringa
    printf("Unesite prvi string: ");
    scanf("%s", string1);

    // Unos drugog stringa
    printf("Unesite drugi string: ");
    scanf("%s", string2);

    // Nadovezivanje stringova bez funkcije
    int i = 0;
    while (string1[i] != '\0') {
        i++;
    }
    int j = 0;
    while (string2[j] != '\0') {
        string1[i++] = string2[j++];
    }
    string1[i] = '\0';

    // Prikazivanje rezultata
    printf("Rezultat nadovezivanja: %s\n", string1);

    char rezultat[100];
    strcpy(rezultat, string1);
    nadovezi(rezultat, string2);
    printf("Rezultat nadovezivanja: %s\n", rezultat);
    

    return 0;
}
