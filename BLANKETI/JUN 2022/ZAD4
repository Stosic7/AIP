#include <stdio.h>
void main()
{
	int brojsati[100], cenasata[100], plata[100], br, i, j, imax;
	char ime[100][20], prezime[100][20];
	FILE* f;
	f = fopen("maj_radnici.txt", "r");
	br = 0;
	while (!feof(f))
	{
		fscanf(f, "%s%s%d%d", ime[br], prezime[br], &brojsati[br], &cenasata[br]);
		plata[br] = brojsati[br] * cenasata[br];
		br++;
	}
		for (i = 0; i < br - 1; i++)
		{
			imax = i;
			for (j = i + 1; j < br; j++)
				if (plata[j] > plata[imax])
					imax = j;
		}
	printf("Radnik s najvecom ostvarenom zaradom u maju je %s %s, sa %d dinara.\n", ime[imax],
		prezime[imax], plata[imax]);
	fclose(f);
}
