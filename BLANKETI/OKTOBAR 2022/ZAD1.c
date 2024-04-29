#include <stdio.h>
void main()
{
	int broj, proizvod;
	proizvod = 1;
	printf("Unesite broj: \n");
	scanf("%d", &broj);
	while (broj != 1)
	{
		if (broj % 2 == 0 && broj > 0)
		{
			int najmanjaCifra, najvecaCifra;
			najmanjaCifra = broj % 10;
			najvecaCifra = broj;
			while (najvecaCifra > 9)
				najvecaCifra = najvecaCifra / 10;
			if (najvecaCifra < najmanjaCifra)
				proizvod *= broj;
		}
		printf("Unesite broj: \n");
		scanf("%d", &broj);
	}
	printf("Proizvod unetih brojeva je %d\n", proizvod);
}
