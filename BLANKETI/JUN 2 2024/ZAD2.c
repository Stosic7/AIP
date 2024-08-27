#include<stdio.h>
#include<math.h>
int main()
{
	int niz[20], i, j, n, suma = 0, br = 0;
	float prosek;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &niz[i]);
	for (i = 0; i < n; i++)
		suma += niz[i];
	prosek = (float)suma / n;
	for (i = 0; i < n; i++)
		if (niz[i] < prosek / 2)
			br++;
	for (i = n - 1; i >= 0; i--)
	{
		if (niz[i] < prosek / 2)
		{
			for (j = n + br - 1; j > i + 1; j--)
			{
				niz[j] = niz[j - 1];
			}
			niz[i + 1] = niz[i] * niz[i];
		}
	}
	for (i = 0; i < (n + br); i++)
		if (i != (n + br - 1))
			printf("%d ", niz[i]);
		else
			printf("%d", niz[i]);
	return 0;
}
