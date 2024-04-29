#include "stdio.h"
#include "math.h"
void main()
{
	int i, j, n, zadeljenje, A[50];
	printf("Unseite duzinu niza\n");
	scanf("%d", &n);
	printf("Unesite elemente niza\n");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < n; i++)
	{
		zadeljenje = 2;
		while (A[i] % zadeljenje == 0 && zadeljenje < sqrt(A[i]))
		{
			zadeljenje++;
		}
		if (A[i] % zadeljenje != 0)
		{
			//broj je prost, izbaciti ga iz niza
			for (j = i; j < n - 1; j++)
				A[j] = A[j + 1];
		}
		n--;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
}
