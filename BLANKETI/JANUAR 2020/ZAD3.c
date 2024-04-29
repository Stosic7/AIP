#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_STRINGS 100

int main() {
    int N;

    // Unos broja stringova
    printf("Unesite broj stringova: ");
    scanf("%d", &N);

    // Unos stringova
    char nizStringova[MAX_STRINGS][MAX_LEN];
    printf("Unesite stringove:\n");
    for (int i = 0; i < N; i++) {
        scanf("%s", nizStringova[i]);
    }

    // Sortiranje stringova
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (strcmp(nizStringova[i], nizStringova[j]) > 0) {
                char tmp[MAX_LEN];
                strcpy(tmp, nizStringova[i]);
                strcpy(nizStringova[i], nizStringova[j]);
                strcpy(nizStringova[j], tmp);
            }
        }
    }

    // Prikaz sortiranog niza
    printf("\nSortiran niz stringova:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", nizStringova[i]);
    }

    // Pronalaženje stringa sa najmanjim i najvećim brojem karaktera
    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < N; i++) {
        if (strlen(nizStringova[i]) < strlen(nizStringova[minIdx])) {
            minIdx = i;
        }
        if (strlen(nizStringova[i]) > strlen(nizStringova[maxIdx])) {
            maxIdx = i;
        }
    }

    // Prikaz stringa sa najmanjim i najvećim brojem karaktera
    printf("\nString sa najmanjim brojem karaktera: %s\n", nizStringova[minIdx]);
    printf("String sa najvecim brojem karaktera: %s\n", nizStringova[maxIdx]);

    return 0;
}
