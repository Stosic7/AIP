#include "stdio.h"
int main()
{
	int fiboNiz[10], i, j, pom, brojParnih;
	fiboNiz[0] = 0;
	fiboNiz[1] = 1;
	for (i = 2; i < 10; i++)
	{
		fiboNiz[i] = fiboNiz[i - 1] + fiboNiz[i - 2];
	}
	printf("Niz pre rotiranja: \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", fiboNiz[i]);
	}
	brojParnih = 0;
	for (i = 0; i < 10; i++)
	{
		if (fiboNiz[i] % 2 == 0)
			brojParnih++;
	}
	printf("\n\n");
	printf("Broj parnih je: %d", brojParnih);
	for (i = 0; i < brojParnih; i++)
	{
		pom = fiboNiz[9];
		for (j = 8; j >= 0; j--)
		{
			fiboNiz[j + 1] = fiboNiz[j];
		}
		fiboNiz[0] = pom;
	}
	printf("\n\n");
	printf("Niz posle rotiranja: \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", fiboNiz[i]);
	}
	printf("\n\n");
}
