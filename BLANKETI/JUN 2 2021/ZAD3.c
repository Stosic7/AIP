#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Funkcija koja proverava da li je dati string palindrom
int is_palindrome(char* str) {
    int len = strlen(str);
    int i = 0, j = len - 1;
    while (i < j) {
        if (!isalpha(str[i])) {
            i++;
            continue;
        }
        if (!isalpha(str[j])) {
            j--;
            continue;
        }
        if (tolower(str[i]) != tolower(str[j])) {
            return 0; // nije palindrom
        }
        i++;
        j--;
    }
    return 1; // jeste palindrom
}

int main() {
    char sentence[100];
    printf("Unesite recenicu: ");
    fgets(sentence, 100, stdin);

    printf("Palindromi u recenici:\n");
    char* word = strtok(sentence, " ");
    while (word != NULL) {
        if (is_palindrome(word)) {
            printf("%s\n", word);
        }
        word = strtok(NULL, " ");
    }

    return 0;
}
