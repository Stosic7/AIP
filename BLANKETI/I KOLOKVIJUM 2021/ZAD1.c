#include <stdio.h>
void main()
{
	int broj, cifra, magicna, N;
	do
	{
		magicna = 0;
		N = 1;
		printf("Unesite broj: ");
		scanf("%d", &broj);
		while (broj > 0)
		{
			cifra = broj % 10;
			if (cifra == N)
			{
				magicna = 1;
				printf("Cifra %d je magicna.\n", cifra);
			}
			N++;
			broj = broj / 10;
		}
	} while (magicna);
}
