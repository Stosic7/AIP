/*napisati strukturni program na C programskom jeziku koji rotira vrednosti 4 promenljive a,b,c,d za m mesta ulevo. 
Vrednosti promenljivih kao i parametar m unosi korisnik.
Prikazati sadrzaj promenljvih a,b,c,d nakon rotacije. Nemoj koristiti funkcije i break naredbe.*/

#include <stdio.h>

int main() {
    int a, b, c, d, m, i;

    // Unos vrednosti a,b,c,d i m
    printf("Unesite vrednosti a, b, c, d \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Unesite broj m: ");
    scanf("%d", &m);

    // Rotacija vrednosti ulevo za m mesta
    for (i = 0; i < m; i++) {
        int temp = a;
        a = b;
        b = c;
        c = d;
        d = temp;
    }

    // Prikaz rezultata
    printf("Nakon rotacije za %d mesta ulevo:\n", m);
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;

}
