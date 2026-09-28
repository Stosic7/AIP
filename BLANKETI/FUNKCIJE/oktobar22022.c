#include <stdio.h>
#include <string.h>

#define MAX_BROJ_STRINGOVA 100
#define MAX_DUZINA_STRINGA 100

/*
 * Funkcija zamena:
 * Vrši zamenu sadržaja dva stringa (niza karaktera).
 * Koristi pomoćni bafer za privremeno čuvanje vrednosti.
 */

void zamena(char prviString[], char drugiString[]) {
    char privremeniString[MAX_DUZINA_STRINGA];
    
    strcpy(privremeniString, prviString);
    strcpy(prviString, drugiString);
    strcpy(drugiString, privremeniString);
}

int main() {
    int brojStringova;
    char nizStringova[MAX_BROJ_STRINGOVA][MAX_DUZINA_STRINGA];

    // Unos broja stringova
    printf("Unesite broj stringova: ");
    scanf("%d", &brojStringova);
        
    // Čišćenje preostalog znaka za novi red iz ulaznog bafera
    getchar();

    // Unos pojedinačnih stringova
    printf("Unesite stringove:\n");
    for (int i = 0; i < brojStringova; i++) {
        printf("String [%d]: ", i + 1);
        fgets(nizStringova[i], MAX_DUZINA_STRINGA, stdin);
    }

    // 1. Prikaz unetog niza pre sortiranja
    printf("\n Uneti niz stringova \n");
    for (int i = 0; i < brojStringova; i++) {
        printf("%s\n", nizStringova[i]);
    }

    // 2. Leksičko uređivanje
    for (int i = 0; i < brojStringova - 1; i++) {
        for (int j = i + 1; j < brojStringova; j++) {
            // strcmp vraća vrednost > 0 ako je prvi string leksički veći od drugog
            if (strcmp(nizStringova[i], nizStringova[j]) > 0) {
                zamena(nizStringova[i], nizStringova[j]);
            }
        }
    }

    // 3. Prikaz niza nakon leksičkog uređivanja
    printf("\n Niz nakon leksickog uredjenja \n");
    for (int i = 0; i < brojStringova; i++) {
        printf("%s\n", nizStringova[i]);
    }

    // 4. Pronalaženje stringova sa najmanjim i najvećim brojem karaktera
    int indeksNajkracegStringa = 0;
    int indeksNajduzegStringa = 0;

    for (int i = 1; i < brojStringova; i++) {
        if (strlen(nizStringova[i]) < strlen(nizStringova[indeksNajkracegStringa])) {
            indeksNajkracegStringa = i;
        }
        
        if (strlen(nizStringova[i]) > strlen(nizStringova[indeksNajduzegStringa])) {
            indeksNajduzegStringa = i;
        }
    }

    // 5. Prikaz stringa sa najmanjim i najvećim brojem karaktera
    printf("\n Rezultati po duzini \n");
    printf("String sa najmanjim brojem karaktera: %s (duzina: %zu)\n", 
           nizStringova[indeksNajkracegStringa], strlen(nizStringova[indeksNajkracegStringa]));
           
    printf("String sa najvecim brojem karaktera: %s (duzina: %zu)\n", 
           nizStringova[indeksNajduzegStringa], strlen(nizStringova[indeksNajduzegStringa]));

    return 0;
}
