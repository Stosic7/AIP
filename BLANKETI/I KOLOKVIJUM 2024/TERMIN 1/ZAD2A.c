/* napisati strukturni program na c programskom jeziku koji iz celobrojnog niza A od N elemenata brise element 
koji se nalazi na zadatoj poziciji k ( brise se element iz niza sa indeksom k-1). Elemente niza i poziciju k unosi korisnik.  
Prikazati elemente niza nakon izbacivanja elementa. 
Napomena: Elemente niza prikazivati tako da se iza svakog elementa nalazi jedan blanko znak. Smatrati da je k pozitivan ceo broj manji od N. */

#include <stdio.h>

int main() {
    int N, k, A[100];

    // Unos broja elemenata niza
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &N);

    // Unos elemenata niza
    printf("Unesite elemente niza:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Elementi niza PRE izbacivanja elementa:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Unos pozicije k
    printf("Unesite poziciju k (manje od %d): ", N);
    scanf("%d", &k);

    // Brisanje elementa na poziciji k-1
    for (int i = k - 1; i < N - 1; i++) {
        A[i] = A[i + 1];
    }

    // Smanjenje broja elemenata niza
    N--;
    printf("\n");

    // Prikaz elemenata niza nakon brisanja
    printf("Elementi niza NAKON izbacivanja elementa:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
