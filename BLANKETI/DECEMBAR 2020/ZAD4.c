#include <stdio.h>
void main()
{
	int N, i, j;
	int A[10][10];
	FILE* f = fopen("matrica.txt", "r");
	fscanf(f, "%d", &N);
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			fscanf(f, "%d", &A[i][j]);
	printf("\nTrazeni elementi matrice A su: \n");
	for (i = N - 1; i >= 1; i--)
		printf("%d ", A[i][0]);
	for (i = 0; i < N / 2 + 1; i++)
		printf("%d ", A[i][i]);
	for (i = N / 2 - 1; i >= 0; i--)
		printf("%d ", A[i][N - 1 - i]);
	for (i = 1; i < N; i++)
		printf("%d ", A[i][N - 1]);
}
