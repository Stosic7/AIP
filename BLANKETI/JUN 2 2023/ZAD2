#include <stdio.h>
#include <math.h>
void main()
{
	int niz[30], i, n = 0, prost, pret1, pret2, rbr = 1;
	printf("Unesite elemente niza:\n");
	do
	{
		scanf("%d", &niz[n]);
		i = 2;
		prost = 1;
		while (prost && i <= sqrt(niz[n]))
		{
			if (niz[n] % i == 0)
				prost = 0;
			else
				i++;
		}
		n++;
	} while (!prost);
	pret1 = niz[0];
	pret2 = niz[1];
	for (i = 2; i < n; i++)
	{
		if (pret1 * pret1 - pret2 * pret2 == niz[i])
		{
			pret1 = pret2;
			pret2 = niz[i];
			niz[i] = niz[n - 1] * rbr;
			rbr++;
		}
		else
		{
			pret1 = pret2;
			pret2 = niz[i];
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", niz[i]);
}
