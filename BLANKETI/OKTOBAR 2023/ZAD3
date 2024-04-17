#include <stdio.h>
int main() {
	FILE* ulazni, * izlazni;
	int brSlovaA, brSlovaE, i = -1;
	int pocReci;
	char recenica[50];
	ulazni = fopen("stringovi/ulazna_recenica.txt", "r");
	izlazni = fopen("stringovi/izlaz.txt", "w");
	if (ulazni != NULL)
	{
		fgets(recenica, 50, ulazni);
	}
	else
		printf("Doslo je do greske prilikom otvaranja fajla");
	do
	{
		i++;
		pocReci = i;
		brSlovaA = 0;
		brSlovaE = 0;
		while (recenica[i] != ' ' && recenica[i] != '.')
		{
			if (recenica[i] == 'a' || recenica[i] == 'A')
				brSlovaA++;
			if (recenica[i] == 'e' || recenica[i] == 'E')
				brSlovaE++;
			i++;
		}
		if (brSlovaA > brSlovaE)
		{
			for (int j = pocReci; j < i; j++)
				fprintf(izlazni, "%c", recenica[j]);
			fprintf(izlazni, "\n");
		}
	} while (recenica[i] != '.');
	flose(ulazni);
	fclose(izlazni);
	return 0;
}
