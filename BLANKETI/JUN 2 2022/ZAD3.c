#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int duzina_najduze_reci(char* recenica) {
    int duzina = 0, maks_duzina = 0;
    int i;
    for (i = 0; recenica[i] != '\0'; i++) {
        if (recenica[i] != ' ') {
            duzina++;
        }
        else {
            if (duzina > maks_duzina) {
                maks_duzina = duzina;
            }
            duzina = 0;
        }
    }
    if (duzina > maks_duzina) {
        maks_duzina = duzina;
    }
    return maks_duzina;
}

int main() {
    int N;

    // Unos broja rečenica
    printf("Unesite broj recenica: ");
    scanf("%d", &N);
    getchar(); // Očisti bafer

    char recenice[100][MAX_LEN];
    int duzine[100];

    // Unos rečenica
    for (int i = 0; i < N; i++) {
        printf("Unesite recenicu %d: ", i + 1);
        fgets(recenice[i], MAX_LEN, stdin);
        recenice[i][strcspn(recenice[i], "\n")] = '\0'; // Ukloni \n karakter sa kraja
        duzine[i] = duzina_najduze_reci(recenice[i]);
    }

    // Sortiranje rečenica u opadajućem redosledu po dužini najduže reči
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (duzine[i] < duzine[j]) {
                int temp_duzina = duzine[i];
                duzine[i] = duzine[j];
                duzine[j] = temp_duzina;
                char temp[MAX_LEN];
                strcpy(temp, recenice[i]);
                strcpy(recenice[i], recenice[j]);
                strcpy(recenice[j], temp);
            }
        }
    }

    // Ispis sortiranih rečenica
    printf("Sortirane recenice:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", recenice[i]);
    }

    return 0;
}
