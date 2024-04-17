#include <stdio.h>
void main()
{
	int N, broj, sumaCifara, i, j;
	// Unos broja N
	printf("Unesite broj N:\n");
	scanf("%d", &N);
	// Petlja za unos N brojeva i proveru suma cifara
	for (i = 0; i < N; i++)
	{
		// Unos broja
		printf("Unesite ceo pozitivan broj:\n");
		scanf("%d", &broj);
		// Računanje sume cifara
		sumaCifara = 0;
		while (broj > 0) {
			sumaCifara += broj % 10;
			broj /= 10;
		}
		// Provera da li je suma cifara prost broj
		int prost = 1;
		j = 2;
		while (j <= sumaCifara / 2 && prost != 0)
		{
			if (sumaCifara % j == 0)
				prost = 0;
			j++;
		}
		// Ispis rezultata
		if (prost)
			printf("Suma cifara je prost broj.\n");
		else
			printf("Suma cifara nije prost broj.\n");
	}
}
