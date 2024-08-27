#include <stdio.h>
void main()
{
	int M[10][10], n, i, j, min, max;
	FILE* f = fopen("matrica.txt", "r");
	if (f) {
		fscanf(f, "%d", &n);
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				fscanf(f, "%d", &M[i][j]);
		min = M[0][1];
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
				if (M[i][j] < min)
					min = M[i][j];
		max = M[1][0];
		for (i = 1; i < n; i++)
			for (j = 0; j < i; j++)
				if (M[i][j] > max)
					max = M[i][j];
		printf("%d %d", min, max);
		fclose(f);
	}
}
