#include <stdio.h>
void ReciSaSlovomA(char* recenica)
{
	int i = -1, j, brojacSlovaA, pocetakReci;
	do
	{
		i++;
		brojacSlovaA = 0;
		pocetakReci = i;
		while (recenica[i] != ' ' && recenica[i] != '.')
		{
			if (recenica[i] == 'a' || recenica[i] == 'A')
				brojacSlovaA++;
			i++;
		}
		if (brojacSlovaA == 3)
		{
			for (j = pocetakReci; j < i; j++)
				printf("%c", recenica[j]);
			printf("\n");
		}
	} while (recenica[i] != '.');
}
void main()
{
	char recenica[100];
	printf("Unesite zeljenu recenicu:\n");
	gets(recenica);
	ReciSaSlovomA(recenica);
}
