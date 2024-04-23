#include <stdio.h>
void main()
{
	int a[30], n, i, j;
	float P, S = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
		S += a[i];
	P = S / n;

	i = 0;
	while (i < n)
	{
		if (a[i] > P)
		{
			for (j = n; j > i + 1; j--)
				a[j] = a[j - 1];
			a[i + 1] = a[i];
			i++;
			n++;
		}
		i++;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
}
