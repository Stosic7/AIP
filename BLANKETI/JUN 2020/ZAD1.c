#include <stdio.h>
int main()
{
	int s, z, brojac, broj, cifra;
	brojac = 0;
	s = 0;
	scanf("%d", &z);
	while (s < z) {
		scanf("%d", &broj);
		brojac++;
		printf("%d\n", broj);
		while (broj > 0) {
			cifra = broj % 10;
			broj = broj / 10;
			if (cifra % 2 == 0) s += cifra; else s -= cifra;
			printf("Suma: %d\n", s);
		}
	}
	printf("Brojac: %d\n", brojac);
	return 0;
}
