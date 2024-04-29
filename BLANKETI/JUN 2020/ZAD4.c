#include<stdio.h>
int sumirajNiz(int niz[], int n)
{
	int sum = 0, i;
	for (i = 0; i < n; i++)
	{
		sum += niz[i];
	}
	return sum;
}
int main()
{
	int a[30][30], pom[30];
	int n, i, j;
	int suma = 0;
	int sumaSD = 0;
	float srednjaVrednost;
	float srednjaVrednostSD;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < n; i++)
		suma += sumirajNiz(a[i], n);
	for (i = 0; i < n; i++)
		pom[i] = a[i][n - 1 - i];
	sumaSD = sumirajNiz(pom, n);
	srednjaVrednost = (float)suma / (n * n);
	srednjaVrednostSD = (float)sumaSD / n;
	printf("%d", suma);
	printf("%f", srednjaVrednost);
	printf("%d", sumaSD);
	printf("%f", srednjaVrednostSD);
	printf("%f", srednjaVrednost / srednjaVrednostSD);
	return 0;
}
