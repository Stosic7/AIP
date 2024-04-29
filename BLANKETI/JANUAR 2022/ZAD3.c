#include <stdio.h>

// Struktura za čuvanje informacija o reči
struct Rec {
    int pocetak;
    int duzina;
};

// Funkcija koja briše reč iz rečenice na osnovu indeksa prvog slova reči i dužine reči
void obrisi_rec(char recenica[], struct Rec rec) {
    // Pomeranje karaktera u rečenici za dužinu reči
    for (int i = rec.pocetak + rec.duzina; recenica[i - 1] != '\0'; ++i) {
        recenica[i - rec.duzina] = recenica[i];
    }
}

int main() {
    char recenica[100];
    printf("Unesite recenicu: ");
    gets(recenica); // Koristimo gets umesto scanf zbog citanja cele linije teksta

    // Pronalaženje prvog slova druge reči po redu
    int indeks_pocetka = -1;
    int brojac_reci = 0;
    for (int i = 0; recenica[i] != '\0'; ++i) {
        if (recenica[i] != ' ' && (i == 0 || recenica[i - 1] == ' ')) {
            brojac_reci++;
            if (brojac_reci == 2) {
                indeks_pocetka = i;
                break;
            }
        }
    }

    // Pronalaženje dužine druge reči
    int duzina_reci = 0;
    for (int i = indeks_pocetka; recenica[i] != ' ' && recenica[i] != '\0'; ++i) {
        duzina_reci++;
    }

    // Kreiranje strukture sa informacijama o reči koju treba obrisati
    struct Rec rec;
    rec.pocetak = indeks_pocetka;
    rec.duzina = duzina_reci;

    // Poziv funkcije za brisanje reči iz rečenice
    obrisi_rec(recenica, rec);

    // Ispis rezultata
    printf("Rezultat nakon brisanja druge reci: %s\n", recenica);

    return 0;
}
