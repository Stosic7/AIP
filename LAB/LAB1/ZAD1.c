#include <stdio.h>

int main() {
    int N, F = 1, i, J;
    long int S = 0;
    N = 0;

    while (N <= 0) {
        printf("Unesi ceo broj: ");
        scanf("%d", &N);
    }

    for (i = 1; i <= N; i++)
        F = F * i;

    printf("\nF=%d\n", F);

    for (J = F; J <= F + i; J++)
        S = S + J;

    printf("\nDobijen rezultat je S=%7ld,", S);

    if (S % 2 == 0)
        printf(" sto jeste paran broj.\n");
    else
        printf(" sto nije paran broj.\n");

    return 0;
}

// ISPRAVKE:
-Dodato #include <stdio.h> na početak programa jer je to neophodno za funkcije poput printf i scanf.
-Promenio void main() u int main() jer funkcija main treba da vraća int.
-Ispravio mala slova j u for petlji u for (J = F; J <= F + i; J++) jer su promenljive u C-u case-sensitive.
-Dodato return 0; na kraju funkcije main kako bi se ispravno završio program.

// STA KOD RADI?

Ovaj program korisniku omogućava da unese pozitivan ceo broj N, a zatim računa faktorijel tog broja (označen sa F) 
i zatim sumu brojeva od F do F+N (označenu sa S). Na kraju programa se ispisuje vrednost S 
i proverava se da li je ta vrednost paran broj ili ne, pri čemu se ispisuje odgovarajuća poruka.
