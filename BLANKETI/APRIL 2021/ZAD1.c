#include<stdio.h>
int main()
{
	int n, i, broj, pom, cifra, sum, maxBr, maxSum;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &broj);
		pom = broj;
		sum = 0;
		while (broj != 0)
		{
			cifra = broj % 10;
			broj = broj / 10;
			if (cifra % 2 != 0)
				sum += cifra;
		}
		if (i == 0) {
			maxBr = pom;
			maxSum = sum;
		}
		if (sum > maxSum)
		{
			maxSum = sum;
			maxBr = pom;
		}
	}
	printf("Broj sa najvećim zbirom neparnih cifara je %d.", maxBr);
	return 0;
}
