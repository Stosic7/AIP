#include <stdio.h>
void main()
{
	int A[10][10], B[10][10], Bt[10][10], C[10][10], N, M, i, j, l;
	FILE* fdim, * fmat, * frez;
	fdim = fopen("dimenzije.txt", "r");
	fscanf(fdim, "%d%d", &N, &M);
	fclose(fdim);
	fmat = fopen("matrice.txt", "r");
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			fscanf(fmat, "%d", &A[i][j]);
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			fscanf(fmat, "%d", &B[i][j]);
	fclose(fmat);
	//Kreiranje transponovane matrice
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			Bt[j][i] = B[i][j];
	//Mnozenje matrica
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
		{
			C[i][j] = 0;
			for (l = 0; l < M; l++)
				C[i][j] += A[i][l] * Bt[l][j];
		}
	frez = fopen("rezultat.txt", "w");
	for (i = 0; i < N; i++)
		fprintf(frez, "%d ", C[i][N - 1 - i]);
	fclose(frez);
}
