#include <stdio.h>
void main()
{
	int prvi, drugi, rezNiz[100], j, i = 0;
	FILE* fprvi = fopen("prvi.txt", "r");
	FILE* fdrugi = fopen("drugi.txt", "r");
	while (!feof(fprvi) || !feof(fdrugi))
	{
		if (feof(fprvi))
		{
			fscanf(fdrugi, "%d", &drugi);
			rezNiz[i++] = drugi;
		}
		else if (feof(fdrugi))
		{
			fscanf(fprvi, "%d", &prvi);
			rezNiz[i++] = prvi;
		}
		else
		{
			fscanf(fdrugi, "%d", &drugi);
			fscanf(fprvi, "%d", &prvi);
			if (prvi < drugi)
			{
				rezNiz[i++] = prvi;
				rezNiz[i++] = drugi;
			}
			else
			{
				rezNiz[i++] = drugi;
				rezNiz[i++] = prvi;
			}
		}
	}
	fclose(fprvi);
	fclose(fdrugi);
	for (j = 0; j < i; j++)
	{
		printf("%d ", rezNiz[j]);
	}
}
