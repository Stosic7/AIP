#include <stdio.h>
int main()
{
	int a, b, broj, i, cifra, suma;
	printf("Unesite vrednosti a i b:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	i = a;

	while (i <= b)
	{
		suma = 0;
		broj = i;
		while (broj > 0)
		{
			cifra = broj % 10;
			suma += cifra;
			broj /= 10;
		}
		if (i % suma == 0)
			printf("%d ", i);
		i++;
	}
}
