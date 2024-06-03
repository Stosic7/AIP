/* Sada dopuni zadatak tako da se nakon rotacije kreira cetvorocifreni broj od unetih promenljivih. 
Smatrati da korisnik unosi cifre gde je d cifra jedinice, c desetice, b stotine i a hiljade. 
Prikazati cetvorocifreni broj. */

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

    // Kreiranje četvorocifrenog broja
    int cetvorocifreni_broj = a * 1000 + b * 100 + c * 10 + d;

    // Prikaz rezultata
    printf("\n");
    printf("Cetvorocifreni broj: %d\n", cetvorocifreni_broj);

    return 0;

}
