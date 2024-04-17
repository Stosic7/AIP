#include <stdio.h>
main()
{
	int n, i, j;
	float a[50], t, b[50];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%f", &a[i]);
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j + 1] > a[j])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	printf("\n");
	j = 0;
	for (i = 0; i < n; i++)
	{
		b[n / 2 + j] = a[i];
		if (j < 0)
			j = -j;
		else
			j = -j - 1;
	}
	for (i = 0; i < n; i++)
		printf("%f\t", b[i]);
	system("pause");
}
