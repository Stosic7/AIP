#include <string.h>
void main()
{
	int i, n, niz[50], imin, imax;
	imin = 0;
	imax = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &niz[i]);
	for (i = 1; i < n; i++)
	{
		if (niz[i] < niz[imin])
		{
			imin = i;
		}
		if (niz[i] > niz[imax])
		{
			imax = i;
		}
	}
	for (i = imin + 1; i < imax; i++)
		niz[i]++;
	for (i = 0; i < n; i++)
