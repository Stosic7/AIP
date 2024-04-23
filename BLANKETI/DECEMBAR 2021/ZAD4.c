#include <stdio.h>
int minMax(int* niz, int n, int p)
{
	int i, rez;
	if (p) {
		rez = niz[0];
		for (i = 1; i < n; i++) {
			if (niz[i] > rez) {
				rez = niz[i];
			}
		}
	}
	else {
		rez = niz[0];
		for (i = 1; i < n; i++) {
			if (niz[i] < rez) {
				rez = niz[i];
			}
		}
	}
	return rez;
}

int main() {
	int i, j, A[10][10], min, max, m, tr;
	scanf("%d", &m);
	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &A[i][j]);
	max = A[0][0];
	min = A[0][0];
	for (i = 0; i < m; i++)
	{
		tr = minMax(A[i], m, 1);
		if (tr > max) {
			max = tr;
		}
		tr = minMax(A[i], m, 0);
		if (tr < min) {
			min = tr;
		}
	}
	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
		{
			if (i + j < m - 1)
			{
				A[i][j] = max;
			}
			if (i + j > m - 1)
			{
				A[i][j] = min;
			}
		}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	return 0;
}
