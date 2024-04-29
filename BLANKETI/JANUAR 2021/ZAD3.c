#include"stdio.h"
int main()
{
	FILE* majka, * otac, * boja;
	char boje_majke[512], boje_oca[512], kombinovano[512], konacnaBoja;
	int i = 0, brojZ = 0, brojP = 0, brojB = 0, max, greska = 0, n = 512;
	majka = fopen("majka.txt", "r");
	otac = fopen("otac.txt", "r");
	boja = fopen("boja.txt", "w");
	fgets(boje_majke, n, majka);
	fgets(boje_oca, n, otac);
	while (i < n && !greska)
	{
		if ((boje_majke[i] != 'z' && boje_majke[i] != 'p' && boje_majke[i] != 'b') || (boje_oca[i] != 'z' &&
			boje_oca[i] != 'p' && boje_oca[i] != 'b'))
			greska = 1;
		i++;
	}
	if (!greska) {
		for (i = 0; i < n; i++)
		{
			if (i % 2 == 0)
				kombinovano[i] = boje_oca[i];
			else
				kombinovano[i] = boje_majke[i];
		}
		for (i = 0; i < n; i = i + 5)
		{
			if (kombinovano[i] == 'z')
				kombinovano[i] = 'p';
			else if (kombinovano[i] == 'p')
				kombinovano[i] == 'b';
			else
				kombinovano[i] = 'z';
		}
		for (i = 0; i < n; i++)
		{
			if (kombinovano[i] == 'z')
				brojZ++;
			else if (kombinovano[i] == 'p')
				brojP++;
			else
				brojB++;
		}
		max = brojZ;
		konacnaBoja = 'Z';
		if (brojP > max)
		{
			max = brojP;
			konacnaBoja = 'P';
		}
		if (brojB > max)
		{
			max = brojB;
			konacnaBoja = 'B';
		}
		fprintf(boja, "Konacna boja je %c, a vrednosti su Zelena=%d, Plava=%d, Braon=%d.", konacnaBoja, brojZ,
			brojP, brojB);
	}
	else
		fprintf(boja, "Nevalidna boja!\n");
	fclose(majka);
	fclose(otac);
	fclose(boja);
	return 0;
}
