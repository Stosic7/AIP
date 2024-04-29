#include <stdio.h>
#include <string.h>
void main()
{
	int kod, palindrom, i;
	char rec[100];
	FILE* f, * p;
	f = fopen("ulaz.txt", "r");
	p = fopen("izlaz.txt", "w");
	while (!feof(f))
	{
		fscanf(f, "%d %s", &kod, &rec);
		palindrom = 1;
		i = 0;
		while (palindrom && i < strlen(rec) / 2)
		{
			if (rec[i] != rec[strlen(rec) - i - 1]) {
				palindrom = 0;
			}
			else
				i++;
		}
		if (palindrom)
		{
			fprintf(p, "%s \n", rec);
		}

	}
	fclose(f);
	fclose(p);
}
