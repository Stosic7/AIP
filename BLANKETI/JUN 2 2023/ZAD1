#include <stdio.h>
#include <math.h>
int main(void) {
	int broj, suma = 0, pozicija = 1, cifra, prost, i;
	scanf("%d", &broj);
	while (broj > 0)
	{
		cifra = broj % 10;
		if (pozicija % 2 != 0) suma += cifra;
		broj = broj / 10;
		pozicija++;
	}
	prost = 1;
	for (i = 2; i <= sqrt(suma); i++)
	{
		if (suma % i == 0) prost = 0;
	}
	if (prost) printf("suma je prost broj\n");
	else printf("suma nije prost broj\n");
	return 0;
}
