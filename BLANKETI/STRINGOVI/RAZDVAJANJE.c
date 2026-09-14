#include <stdio.h>

int je_razdvajac(char c) {
    return c == ' ' || c == ',' || c == '.' || c == '!' || c == '?';
}

int main() {
    char recenica[] = "Ovo je primer bez biblioteke!";
    char rec[100];
    int i = 0, j = 0;

    printf("Izdvojene reči (strukturni pristup):\n");

    while (recenica[i] != '\0') {
        while (je_razdvajac(recenica[i])) {
            i++;
        }

        if (recenica[i] != '\0') {
            j = 0;

            while (recenica[i] != '\0' && !je_razdvajac(recenica[i])) {
                rec[j] = recenica[i];
                j++;
                i++;
            }

            rec[j] = '\0';
            printf("- %s\n", rec);
        }
    }

    return 0;
}
