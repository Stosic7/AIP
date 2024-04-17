#include <stdio.h>
void IzmenaNiza(int* niz, int n)
{
	int srVred = 0, i;
	for (i = 0; i < n; i++)
		srVred += niz[i];
	srVred /= n;
	for (i = 0; i < n; i++)
		if (i % 2 == 0)
			niz[i] += srVred;
		else
			niz[i] -= srVred;
}
void main()
{
	int i, j, A[20][20], B[20], N;
	printf("Unesite N:\n");
	scanf("%d", &N);
	printf("Unesite elemente matrice:\n");
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &A[i][j]);
	for (i = 0; i < N; i++)
		B[i] = A[N - 1 - i][i];
	IzmenaNiza(B, N);
	for (i = 0; i < N; i++)
		A[N - 1 - i][i] = B[i];
	printf("Izmenjena matrica:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
}
