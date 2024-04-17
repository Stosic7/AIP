#include <stdio.h>
#include <math.h>
#include <limits.h>
#define k 2
int main() {
	int niz[20], n, min_el = INT_MAX, pom, smer;
	float pros_vred, suma = 0;
	scanf("%d%d", &n, &smer);
	for (int i = 0; i < n; i++)
		scanf("%d", &niz[i]);
	for (int i = 0; i < n; i++)
		suma += niz[i];
	pros_vred = suma / n;
	printf("Prosecna vrednost elemenata niza je %f \n", pros_vred);
	for (int i = 0; i < n; i++)
		if (niz[i] < min_el)
			min_el = niz[i];
	printf("Minimalni element niza je: %d \n", min_el);
	for (int i = 0; i < n; i++)
		if (niz[i] > pros_vred)
			niz[i] = min_el;
	for (int i = 0; i < k; i++)
	{
		if (smer == 0)
		{
			pom = niz[0];
			for (int i = 0; i < n - 1; i++)
			{
				niz[i] = niz[i + 1];
			}
			niz[n - 1] = pom;
		}
		else if (smer == 1)
		{
			pom = niz[n - 1];
			for (int i = n - 1; i > 0; i--)
			{
				niz[i] = niz[i - 1];
			}
			niz[0] = pom;
		}
		else
			printf("Smer nije adekvatno unet");
	}
	for (int i = 0; i < n; i++)
		printf("%d ", niz[i]);
	return 0;
}
