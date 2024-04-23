#include <stdio.h>
void main()
{
	int P[30], x, N, i = 0, imax = 0, imin, pomeraj;
	printf("Unesite cele brojeve, za prekid unesite 0:\n");
	scanf("%d", &x);
	while (x != 0)
	{
		if (x > 0)
			P[i++] = x;
		scanf("%d", &x);
	}
	N = i;
	for (i = 0; i < N; i++)
		if (P[i] > P[imax])
			imax = i;
	if (imax < N - 1)
	{
		imin = imax + 1;
		for (i = imax + 2; i < N; i++)
			if (P[i] < P[imin])
				imin = i;
		pomeraj = imin - imax - 1;
		for (i = imin; i < N; i++)
			P[i - pomeraj] = P[i];
		N -= pomeraj;
	}
	for (i = 0; i < N; i++)
		printf("%d ", P[i]);
}
