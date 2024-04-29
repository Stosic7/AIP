#include <stdio.h>
void main()
{
	int N, M, A[30], B[30], i, j, k, minA, maxB, pom, prvoPojavljivanje = 1, poslednjaPoz;
	printf("Unesite dimenziju i elemente niza A:\n");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	printf("Unesite dimenziju i elemente niza B:\n");
	scanf("%d", &M);
	for (i = 0; i < M; i++)
		scanf("%d", &B[i]);
	minA = A[0];
	for (i = 1; i < N; i++)
		if (A[i] < minA)
			minA = A[i];
	maxB = B[0];
	for (i = 1; i < M; i++)
		if (B[i] > maxB)
			maxB = B[i];
	for (i = 0; i <= N - M; i++)
	{
		j = 0;
		while (j < M && B[j] == A[i + j])
			j++;
		if (j == M)
		{
			printf("Podniz B se u nizu A javlja od indeksa %d.\n", i);
			if (prvoPojavljivanje)
			{
				prvoPojavljivanje = 0;
				for (k = 0; k < M; k++)
					A[i + k] = minA;
			}
			poslednjaPoz = i;
		}
	}
	for (i = 0; i < M; i++)
		A[poslednjaPoz + i] = maxB;
	printf("Niz A nakon transformacije:\n");
	for (i = 0; i < N; i++)
		printf("%d ", A[i]);
}
