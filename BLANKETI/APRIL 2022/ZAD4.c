#include <stdio.h>
int proizvod(int* A, int N)
{
	int i, p = 1;
	for (i = 0; i < N; i++)
		p = p * A[i];
	return p;
}
void main()
{
	int P[100], pN, A[50][50], N, i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &A[i][j]);
	pN = 0;
	for (i = 1; i < N - 1; i++)
		P[pN++] = A[i][i];
	for (i = 0; i < N; i++)
		P[pN++] = A[i][0];
	for (i = 1; i < N; i++)
		P[pN++] = A[N - 1][i];
	printf("Proizvod je %d.", proizvod(P, pN));
}
