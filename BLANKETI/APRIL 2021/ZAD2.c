#include "stdio.h"
void main()
{
	int i, n, pom, A[50];
	printf("Unseite duzinu niza\n");
	scanf("%d", &n);
	printf("Unesite elemente niza\n");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < n; i++)
	{
		pom = 0;
		while (A[i] > 0)
		{
			pom = pom * 10 + A[i] % 10;
			A[i] = A[i] / 10;
		}
		A[i] = pom;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
}
