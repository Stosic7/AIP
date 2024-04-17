#include <stdio.h>
void transform(int* niz, int n)
{
	int i, j, k, sum, br;
	for (i = 0; i < n; i++)
	{
		br = 0;
		for (j = 1; j < niz[i] - 1; j++)
		{
			sum = j;
			k = j + 1;
			while (k < niz[i] && sum < niz[i]) {
				sum += k;
				k++;
			}
			if (sum == niz[i])
				br++;
		}
		niz[i] = br;
	}
}
int main() {
	int mat[10][10], n, i, j, pom[10];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
	for (i = 0; i < n; i++)
		pom[i] = mat[i][i];
	transform(pom, n);
	for (i = 0; i < n; i++)
		mat[i][i] = pom[i];
	for (i = 0; i < n; i++)
		pom[i] = mat[i][n - 1 - i];
	transform(pom, n);
	for (i = 0; i < n; i++)
		mat[i][n - 1 - i] = pom[i];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}
	return 0;
}
