#include <stdio.h>
#include <math.h>
void main()
{
	int broj, pom, i;
	FILE* ulazni = fopen("ulaznifajl.txt", "r");
	FILE* izlazni = fopen("izlaznifajl.txt", "w");
	while (!feof(ulazni))
	{
		fscanf(ulazni, "%d", &broj);
		i = 2;
		pom = 0;
		while (i <= sqrt(broj) && pom == 0)
		{
			if (broj % i == 0)
				pom++;
			i++;
		}
		if (pom == 0)
			fprintf(izlazni, "%d\n", broj);
	}
	fclose(ulazni);
	fclose(izlazni);
}
