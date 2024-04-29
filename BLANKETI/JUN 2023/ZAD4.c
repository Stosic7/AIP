#include<stdio.h>
int main()
{
	FILE* fIn, * fOut;
	int mat[50][50], i, j, N;
	fIn = fopen("ulazna_matrica.txt", "r");
	fscanf(fIn, "%d", &N);
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			fscanf(fIn, "%d", &mat[i][j]);
	int pom;
	for (i = 0; i < N - 1; i++)
	{
		for (j = i + 1; j < N; j++)
			if (mat[i][i] > mat[j][j])
			{
				pom = mat[i][i];
				mat[i][i] = mat[j][j];
				mat[j][j] = pom;
			}
	}
	int max = mat[0][0];
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (mat[i][j] > max)
				max = mat[i][j];
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (i + j == N - 1)
				mat[i][j] = max;
	fOut = fopen("izlazna_matrica.txt", "w");
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			fprintf(fOut, "%d\n", mat[i][j]);
	fclose(fIn);
	fclose(fOut);
	return 0;
}
