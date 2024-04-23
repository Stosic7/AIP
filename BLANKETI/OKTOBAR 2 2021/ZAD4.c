#include <stdio.h>
void sortiraj(float* R, int N)
{
	int i, j;
	float pom;
	for (i = 0; i < N - 1; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (R[i] > R[j])
			{
				pom = R[i];
				R[i] = R[j];
				R[j] = pom;
			}
		}
	}
}
void main()
{
	int M, i, j, N = 0;
	float A[10][10], P[50];
	scanf("%d", &M);
	for (i = 0; i < M; i++)
		for (j = 0; j < M; j++)
			scanf("%f", &A[i][j]);
	for (i = 0; i < M; i++)
		for (j = 0; j < M; j++)
			if ((i > j) && (i + j > M - 1))
				P[N++] = A[i][j];
	sortiraj(P, N);
	for (i = 0; i < N; i++)
		printf("%f ", P[i]);
}
