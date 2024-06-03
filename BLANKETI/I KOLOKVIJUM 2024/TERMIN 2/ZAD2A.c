/* Na programskom jeziku C napisati strukturni program koji u celobrojni niz A od N elemenata
umeće novi element na zadatu k-tu poziciju, tako da je nakon ubacivanja indeks novog elementa k-1. Elemente niza
i poziciju k unosi korisnik. Prikazati elemente niza nakon umetanja elementa. Napomena: Elemente niza prikazivati
tako da se iza svakog elementa nalazi jedan blanko znak. Smatrati da je k pozitivan broj manji od N.*/

#include <stdio.h>
void main()
{
	int N, k, novi_element, i;
	int A[100];
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	scanf("%d", &novi_element);
	scanf("%d", &k);
	for (i = N; i >= k; i--)
		A[i] = A[i - 1];
	A[k - 1] = novi_element;
	N++;
	for (i = 0; i < N; i++)
		printf("%d ", A[i]);
}
