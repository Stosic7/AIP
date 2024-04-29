#include <stdio.h>
void main()
{
	int N, sumaP, sumaN, x, i, cif;
	printf("Unesite N: ");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		sumaN = sumaP = 0;
		printf("Unesite broj: ");
		scanf("%d", &x);
		while (x > 0)
		{
			cif = x % 10;
			if (cif % 2 == 0)
				sumaP += cif;
			else
				sumaN += cif;
			x /= 10;
		}
		printf("Suma parnih cifara = %d, suma neparnih = %d.\n", sumaP, sumaN);
	}
}
