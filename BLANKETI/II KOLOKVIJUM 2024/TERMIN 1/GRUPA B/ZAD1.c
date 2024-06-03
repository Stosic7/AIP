#include <stdio.h>

int main()
{

	int i, j, pom = -1, a[30], b[15][15], n, k, l, p;

	FILE* file = fopen("matrica.txt", "r");

	if (file == NULL) {
		printf("Greska pri otvaranju fajla.\n");
		return 1;
	}

	fscanf(file, "%d", &n);
	printf("\n");

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			fscanf(file, "%d", &b[i][j]);
		}
	}
	fclose(file);

	k = 0;
	for (j = 0; j < n; j++)
	{
		a[k] = b[0][j];
		k++;
	}
	p = k;
	for (i = 1; i < n; i++)
	{
		a[p] = b[i][n - 1];
		p++;
	}
	l = p;
	for (i = 1, j = 1; i < n - 1, j < n - 1; i++, j++)
	{

		a[l] = b[i][j];
		l++;

	}

	for (int i = 0; i < l - 1; i++) {
		for (int j = 0; j < l - i - 1; j++) {
			if (a[j] < a[j + 1]) {
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}

	k = 0;
	for (j = 0; j < n; j++)
	{
		b[0][j] = a[k];
		k++;
	}
	p = k;
	for (i = 1; i < n; i++)
	{
		b[i][n - 1] = a[p];
		p++;
	}
	l = p;
	for (i = n - 2, j = n - 2; i > 0 && j > 0; i--, j--) {
		b[i][j] = a[l+1];
		l--;
	}

	for (int i = 0; i < n; i++)
	{

		for (j = 0; j < n; j++)
		{

			printf("%d ", b[i][j]);

		}
		printf("\n");

	}



}
