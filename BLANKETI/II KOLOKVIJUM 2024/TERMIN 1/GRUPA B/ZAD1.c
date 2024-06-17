#include <stdio.h>

void printMatrix(int matrix[15][15], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j != 0) {
				printf(" | ");
			}
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int i, j, pom, a[30], b[15][15], n, k;
	FILE* fIn = fopen("matrica.txt", "r");
	fscanf(fIn, "%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			fscanf(fIn, "%d", &b[i][j]);
	fclose(fIn);

	for (i = 0; i < n; i++)
		a[i] = b[0][i];
	k = n;
	for (i = 1; i < n; i++)
		a[k++] = b[i][n - 1];
	for (i = n - 2; i > 0; i--)
		a[k++] = b[i][i];
	for (i = 0; i < k - 1; i++)
		for (j = i + 1; j < k; j++)
			if (a[i] < a[j]) {
				pom = a[i];
				a[i] = a[j];
				a[j] = pom;
			}
	for (i = 0; i < n; i++)
		b[0][i] = a[i];
	k = n;
	for (i = 1; i < n; i++)
		b[i][n - 1] = a[k++];
	for (i = n - 2; i > 0; i--)
		b[i][i] = a[k++];

	printMatrix(b, n);

	return 0;
}
