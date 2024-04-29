#include <stdio.h>
void fja(int* niz, int N, int* m, int* k, int S)
{
	int i = 0, j, nadjen = 0, p;
	*m = -1;
	*k = -1;
	while (i < N && !nadjen)
	{
		j = i;
		p = 1;
		while (j < N && p < S)
			p *= niz[j++];
		if (p == S)
		{
			*m = i;
			*k = j - 1;
			nadjen = 1;
		}
		i++;
	}
	return;
}
void main()
{
	int a[10], pom, j, n, m, k, S;
	printf("Unesite n:\n");
	scanf("%d", &n);
	printf("Unesite elemente niza:\n");
	for (j = 0; j < n; j++)
		scanf("%d", &a[j]);
	printf("Unesite S:\n");
	scanf("%d", &S);
	fja(a, n, &m, &k, S);
	if (m != -1)
		for (j = m; j <= n - (k - m) - 1; j++)
			a[j] = a[j + (k - m) + 1];
	n -= (k - m + 1);
	for (j = 0; j < n; j++)
		printf("%d ", a[j]);
}
