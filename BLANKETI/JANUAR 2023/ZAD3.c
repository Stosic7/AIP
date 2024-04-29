#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

int is_palindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - i - 1])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char recenica[MAX_LEN];
    int broj_palindroma = 0;
    float procenat_palindroma;

    // Unos rečenice
    printf("Unesite recenicu: ");
    fgets(recenica, MAX_LEN, stdin);
    recenica[strcspn(recenica, "\n")] = '\0'; // Ukloni '\n' karakter sa kraja

    // Brojanje palindroma
    char *token = strtok(recenica, " ");
    int broj_reci = 0;
    while (token != NULL) {
        if (is_palindrome(token)) {
            broj_palindroma++;
        }
        broj_reci++;
        token = strtok(NULL, " ");
    }

    // Računanje procenta palindroma
    procenat_palindroma = (float) broj_palindroma / broj_reci * 100;

    // Ispis rezultata
    printf("Recenica: %s\n", recenica);
    printf("Procenat reci koje su palindromi: %.2f%%\n", procenat_palindroma);

    return 0;
}
