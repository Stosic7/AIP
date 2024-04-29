#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
    char rečenica[MAX_SIZE];
    char najdužaReč[MAX_SIZE] = "";
    char reč[MAX_SIZE];
    int dužinaNajdužeReči = 0;
    int brojReči = 0;

    FILE* ulaz = fopen("fajl.txt", "r");
    FILE* izlaz = fopen("izlaz.txt", "w");

    if (ulaz == NULL || izlaz == NULL) {
        printf("Greska pri otvaranju fajlova.\n");
        return 1;
    }

    fgets(rečenica, MAX_SIZE, ulaz);

    // Pronalaženje najduže reči u rečenici
    char* token = strtok(rečenica, " ");
    while (token != NULL) {
        int dužinaReči = strlen(token);
        if (dužinaReči > dužinaNajdužeReči) {
            dužinaNajdužeReči = dužinaReči;
            strcpy(najdužaReč, token);
        }
        token = strtok(NULL, " ");
    }

    // Pisanje najduže reči u izlazni fajl
    fprintf(izlaz, "%s\n", najdužaReč);

    // Prolazak kroz reči i brojanje reči iste dužine kao i najduža reč
    fseek(ulaz, 0, SEEK_SET);  // Postavljanje pokazivača na početak fajla
    while (fscanf(ulaz, "%s", reč) != EOF) {
        if (strlen(reč) == dužinaNajdužeReči && strcmp(reč, najdužaReč) != 0) {
            brojReči++;
            fprintf(izlaz, "%s\n", reč);
        }
    }

    printf("Broj reči iste dužine kao i najduža reč: %d\n", brojReči);

    fclose(ulaz);
    fclose(izlaz);

    return 0;
}
