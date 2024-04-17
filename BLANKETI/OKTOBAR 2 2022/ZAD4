#include <string.h>
void main()
{
	int i, j, n, M[30][30];
	FILE* f;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &M[i][j]);

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)
			{
				if (i > 0)
					M[i][j] = M[i][j] + M[i - 1][j];
				if (i < n - 1)
					M[i][j] = M[i][j] + M[i + 1][j];
				if (j > 0)
					M[i][j] = M[i][j] - M[i][j - 1];
				if (j < n - 1)
					M[i][j] = M[i][j] - M[i][j + 1];
			}
		}
	f = fopen("transformacija.txt", "w");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			fprintf(f, "%d ", M[i][j]);
		fprintf(f, "\n");
	}
	fclose(f);
}
