#include <stdio.h>
int main() {
	int A[20][20], n, k, i, j, p, q, brEl;
	float prosek, suma, B[20][20];
	scanf("%d", &k);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			suma = 0;
			brEl = 0;
			for (p = i - k; p <= i + k; p++)
				for (q = j - k; q <= j + k; q++)
				{
					if (p >= 0 && p < n && q >= 0 && q < n) {
						suma += A[p][q];
						brEl++;
					}
				}
			prosek = suma / brEl;
			B[i][j] = prosek;
		}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%.1f ", B[i][j]);
		printf("\n");
	}
	return 0;
}
