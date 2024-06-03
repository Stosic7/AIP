/*Prilagoditi rešenje pod a tako da program u celobrojni niz A od N elemenata umeće novu vrednost K iza
svakog elementa čija je vrednost Z. Elemente niza i vrednosti K i Z unosi korisnik. Prikazati elemente niza nakon ubacivanja
vrednosti. Napomena: Elemente niza prikazivati tako da se iza svakog elementa nalazi jedan blanko znak.*/

#include <stdio.h>
void main()
{
	int i, j, n, k, K, Z;
	int a[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d%d", &K, &Z);
	k = 0;
	for (i = 0; i < n; i++)
		k += (a[i] == Z);
	if (k > 0)
	{
		i = n - 1;
		j = n + k - 1;
		n += k;
		while (k)
		{
			if (a[i] == Z)
			{
				a[j] = K;
				j--;
				k--;
			}
			a[j] = a[i];
			i--;
			j--;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
