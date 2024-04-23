#include <stdio.h>
void main()
{
	int broj, x, sum = 0, cifraNajveceTezine,
		cifraNajmanjeTezine;
	do
	{
		printf("Unesite broj: ");
		scanf("%d", &broj);
		x = broj;
		cifraNajmanjeTezine = x % 10;
		while (x > 0)
		{
			cifraNajveceTezine = x % 10;
			x = x / 10;
		}
		if (cifraNajmanjeTezine < cifraNajveceTezine)
			sum += broj;
		else
			sum -= broj;
	} while (broj > 0);
	printf("Ukupna suma je %d", sum);
}
