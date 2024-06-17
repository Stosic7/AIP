#include <stdio.h>
#include <string.h>

void printMatrix(int matrix[10][10], int n) {
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
	int b[10][10], n, a[30], i, j, k = 0, pom;
	FILE* f = fopen("matrica.txt", "r");
	fscanf(f, "%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			fscanf(f, "%d", &b[i][j]);
	fclose(f);
	for (i = n - 1; i >= 0; i--)
		a[k++] = b[i][0];
	for (i = 1; i < n; i++)
		a[k++] = b[i][i];
	for (i = n - 2; i >= 0; i--)
		a[k++] = b[i][n - 1];
	for (i = 0; i < k - 1; i++) {
		for (j = i + 1; j < k; j++) {
			if (a[i] > a[j]) {
				pom = a[i];
				a[i] = a[j];
				a[j] = pom;
			}
		}
	}
	k = 0;
	for (i = n - 1; i >= 0; i--)
		b[i][0] = a[k++];
	for (i = 1; i < n; i++)
		b[i][i] = a[k++];
	for (i = n - 2; i >= 0; i--)
		b[i][n - 1] = a[k++];

	printMatrix(b, n);

	return 0;
}
