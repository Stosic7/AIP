/*Dopuniti rešenje pod a delom koda koji određuje da li je suma izdvojenih parnih cifara unetog N-tocifrenog
celog broja veća od sume neparnih cifara. Program prikazuje “Da” ili “Ne”*/

#include <stdio.h>
void main()
{
	int broj, cifra, suma_parnih = 0, suma_neparnih = 0;
	scanf("%d", &broj);
	while (broj > 0)
	{
		cifra = broj % 10;
		broj = broj / 10;
		if (cifra % 2 == 0)
			suma_parnih += cifra;
		else
			suma_neparnih += cifra;
	}
	if (suma_parnih > suma_neparnih)
		printf("Da");
	else
		printf("Ne");
}
