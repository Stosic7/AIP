#include 

typedef struct {
    char naziv[50];
    int godinaIzdanja;
    float cena;
} Knjiga;

int main() {
    Knjiga k1;

    // Unos podataka o knjizi
    scanf("%s", k1.naziv);
    scanf("%d", &k1.godinaIzdanja);
    scanf("%f", &k1.cena);

    // Ispis
    printf("Knjiga: %s | Godina: %d | Cena: %.2f RSD\n", k1.naziv, k1.godinaIzdanja, k1.cena);

    return 0;
}
