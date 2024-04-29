#include <stdio.h>
void main()
{
	int N, i, j, k, M;
	float R[10][10], P[10], pom;
	FILE* f;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%f", &R[i][j]);
	for (j = 0; j < N; j += 2)
	{
		M = 0;
		for (k = 0; k < N; k += 2)
			P[M++] = R[k][j];
		for (i = 0; i < M - 1; i++)
		{
			for (k = i + 1; k < M; k++)
			{
				if (P[i] <= P[k])
				{
					pom = P[i];
					P[i] = P[k];
					P[k] = pom;
				}
			}
		}
		M = 0;
		for (k = 0; k < N; k += 2)
			R[k][j] = P[M++];
	}
	f = fopen("R.txt", "w");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			fprintf(f, "%f ", R[i][j]);
		}
		fprintf(f, "\n");
	}
	fclose(f);
}
