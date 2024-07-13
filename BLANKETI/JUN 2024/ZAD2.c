#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int P[20], Q[20], R[20], S[40], A[20];
	int m, n, k, i, j;
	int flag, brojacPrvi = 0, brojacDrugi = 0;
	scanf("%d", &m);
	for (i = 0; i < m; i++)
		scanf("%d", &P[i]);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &Q[i]);
	scanf("%d", &k);
	for (i = 0; i < k; i++)
		scanf("%d", &R[i]);
	for (i = 0; i < m; i++)
	{
		flag = 0;
		for (j = 0; j < n; j++)
		{
			if (P[i] == Q[j])
				flag = 1;
		}
		if (flag == 0)
		{
			A[brojacPrvi++] = P[i];
		}
	}
	for (i = 0; i < brojacPrvi; i++)
	{
		S[brojacDrugi] = A[i];
		brojacDrugi++;
	}
	for (i = 0; i < k; i++)
	{
		flag = 0;
		for (j = 0; j < brojacPrvi; j++)
		{
			if (R[i] == A[j])
				flag = 1;
		}
		if (flag == 0)
		{
			S[brojacDrugi++] = R[i];
		}
	}
	if (brojacDrugi > 0)
	{
		for (i = 0; i < brojacDrugi; i++)
			printf("%d ", S[i]);
	}
	else
		printf("Prazan skup!");
	return 0;
}
