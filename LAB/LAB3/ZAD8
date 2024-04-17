#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int i, j, k, N, M, m, niz[100], pom;

	printf("Unesite N: \n");
	scanf("%d", &N);

	printf("Unesite elemente niza: \n");
	for (int i = 0; i < N; i++)
	{

		scanf("%d", &niz[i]);

	}

	printf("Uneti niz: \n");
	for (int i = 0; i < N; i++)
	{

		printf("%3d", niz[i]);

	}

	printf("\n");

	printf("Unesite M: \n");
	scanf("%d", &M);

	for (int k = 0; k < M; k++)
	{

		printf("Element za umetanje: \n");
		scanf("%d", &m);

		j = N - 1;
		while (j >= 0 && niz[j] < m)
		{

			niz[j + 1] = niz[j];
			j--;

		}

		niz[j + 1] = m;
		N++;

		printf("Niz nakon umetanja: \n");
		for (int j = 0; j < N; j++)
		{

			printf("%3d", niz[j]);

		}

	}


	return 0;

}
