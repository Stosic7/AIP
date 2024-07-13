#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, pom, a[30], b[15][15], n, k;
	FILE* fIn = fopen("matrica.txt", "r");
	fscanf(fIn, "%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			fscanf(fIn, "%d", &b[i][j]);
	fclose(fIn);
	for (i = 0; i < n; i++)
		a[i] = b[n - 1 - i][0];
	k = n;
	for (i = 1; i < n; i++)
		a[k++] = b[0][i];
	for (i = 1; i < n; i++)
		a[k++] = b[i][n - 1];
	for (i = 1; i < n - 1; i++)
		a[k++] = b[n - 1][n - 1 - i];
	for (i = 0; i < k - 1; i++)
		for (j = i + 1; j < k; j++)
			if (a[i] > a[j])
			{
				pom = a[i];
				a[i] = a[j];
				a[j] = pom;
			}
	for (i = 0; i < n; i++)
		b[n - 1 - i][0] = a[i];
	k = n;
	for (i = 1; i < n; i++)
		b[0][i] = a[k++];
	for (i = 1; i < n; i++)
		b[i][n - 1] = a[k++];
	for (i = 1; i < n - 1; i++)
		b[n - 1][n - 1 - i] = a[k++];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
	return 0;
}
