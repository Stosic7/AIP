#include "stdio.h"
void main()
{
	int i, j, n, a[50][50], sd = 0, s;
	FILE* f = fopen("matrica.txt", "r");
	fscanf(f, "%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			fscanf(f, "%d", &a[i][j]);
	for (i = 0; i < n; i++)
		sd += a[i][i];
	for (i = 0; i < n; i++)
	{
		s = 0;
		for (j = 0; j < n; j++)
			s += a[i][j];
		if (s > sd)
		{
			for (j = 0; j < n; j++)
				printf("%d ", a[i][j]);
			printf("\n");
		}
	}
}
