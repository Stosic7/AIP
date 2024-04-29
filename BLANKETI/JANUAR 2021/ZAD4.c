#include <stdio.h>
int minmax(int* A, int N, int s)
{
	int minmax, i;
	minmax = A[0];
	if (s == -1) //minimalni
	{
		for (i = 1; i < N; i++)
		{
			if (minmax > A[i])
				minmax = A[i];
		}
	}
	else if (s == 1) // maksimalni element
	{
		for (i = 1; i < N; i++)
		{
			if (minmax < A[i])
				minmax = A[i];
		}
	}
	return minmax;
}
void main()
{
	int N, i, j;
	int B[10][10], A[10];
	int najmanjaKolona, najvecaVrsta, pom;
	int najmanjaKolonaIndex = 0, najvecaVrstaIndex = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &B[i][j]);
	najvecaVrsta = minmax(B[0], N, 1);
	for (i = 1; i < N; i++)
	{
		pom = minmax(B[i], N, 1);
		if (pom > najvecaVrsta)
		{
			najvecaVrsta = pom;
			najvecaVrstaIndex = i;
		}
	}
	for (i = 0; i < N; i++)
		A[i] = B[i][0];
	najmanjaKolona = minmax(A, N, -1);
	for (i = 1; i < N; i++)
	{
		for (j = 0; j < N; j++)
			A[j] = B[j][i];
			pom = minmax(A, N, -1);
			if (pom < najmanjaKolona)
			{
				najmanjaKolona = pom;
				najmanjaKolonaIndex = i;
			}
	}
	printf("\nUneta matrica je \n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d ", B[i][j]);
		printf("\n");
	}
	printf("\nVrsta sa najvecim elementom matrice je %d.\n", najvecaVrstaIndex + 1);
	printf("\nKolona sa najmanjim elementom matrice je %d.\n", najmanjaKolonaIndex + 1);
}
