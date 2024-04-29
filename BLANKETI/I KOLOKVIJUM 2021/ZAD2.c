#include <stdio.h>
void main()
{
	int a[20], n, brPoj, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
	{
		brPoj = 0;
		for (j = 0; j < n; j++)
		{
			if (a[i] == a[j])
				brPoj++;
		}
		if (brPoj == 1)
		{
			for (j = n; j > i + 1; j--)
			{
				a[j] = a[j - 1];
			}
			a[i + 1] = a[i];
			n++;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
