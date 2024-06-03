/* Prilagoditi zadatak ZAD2A tako da program iz celobrojnog niza A od N elemenata brise sve elemente niza cija je vrednost jednaka unetoj vrednosti K. 
Elemente niza i vrednost K unosi korisnik. Prikazati elemente niza PRE i NAKON izbacivanja elemenata.
Napomena: Elemente niza prikazivati tako da se iza svakog elementa nalazi jedan blanko znak. */

#include <stdio.h>

int main() {
    int N, K, A[100];

    // Unos broja elemenata niza
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &N);

    // Unos elemenata niza
    printf("Unesite elemente niza:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Prikaz elemenata niza PRE brisanja
    printf("Elementi niza PRE izbacivanja elemenata:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Unos vrednosti K
    printf("Unesite vrednost K za brisanje: ");
    scanf("%d", &K);

    // Brisanje elemenata niza koji su jednaki vrednosti K
    int i = 0;
    while (i < N) {
        if (A[i] == K) {
            for (int j = i; j < N - 1; j++) {
                A[j] = A[j + 1];
            }
            N--;
        }
        else {
            i++;
        }
    }

    //ALTERNATIVA: FOR PETLJA UMESTO WHILE//

    /*for (int i = 0; i < N; i++)
     {
    
         if (A[i] == K)
         {
    
             for (int j = i; j < N - 1; j++)
             {
    
                 A[j] = A[j + 1];
    
             }
    
             i--;
             N--;
    
         }
    
     }*/

    // Prikaz elemenata niza NAKON brisanja
    printf("Elementi niza NAKON izbacivanja elemenata:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
