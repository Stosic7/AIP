#include <stdio.h>

typedef struct {
    int sirina;
    int visina;
} Pravougaonik;

// Funkcija koja računa površinu
int povrsina(Pravougaonik p) {
    return p.sirina * p.visina;
}

int main() {
    Pravougaonik p1;
    p1.sirina = 10;
    p1.visina = 5;

    int p = povrsina(p1);
    printf("Povrsina pravougaonika: %d\n", p);

    return 0;
}
