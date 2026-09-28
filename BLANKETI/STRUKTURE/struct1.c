#include <stdio.h>

// Definisanje strukture
struct Tacka {
    int x;
    int y;
};

int main() {
    // Kreiranje i inicijalizacija promenljive
    struct Tacka t1;
    
    // Upisivanje vrednosti u članove
    t1.x = 5;
    t1.y = 10;

    // Čitanje vrednosti iz članova
    printf("Koordinata tacke: (%d, %d)\n", t1.x, t1.y);

    return 0;
}
