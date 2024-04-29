#define N 100
#include <stdio.h>
void sort(int* a, int n)
{
	int i, j, imin, t;
	for (i = 0; i < n - 1; i++)
	{
		imin = i;
		for (j = i; j < n; j++)
			if (a[j] < a[imin])
				imin = j;
		if (i != imin)
		{
			t = a[i];
			a[i] = a[imin];
			a[imin] = t;
		}
	}
}
void main()
{
	int n, a[N], m, i, d;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i += m)
	{
		if (i + m < n)
			d = m;
		else
			d = i + m - n;
		sort(&a[i], d);
	}
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
