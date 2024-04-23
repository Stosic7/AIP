#include <stdio.h>
int main()
{
	int i, j, count;
	int k, n;
	int niz[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &niz[i]);
	scanf("%d", &k);
	i = 0;
	while (i < n)
	{
		count = 0;
		while (i + count < n && count < k && niz[i] == niz[i + count])
			count++;
		if (count == k)
		{
			for (j = i; j < n - k; j++)
				niz[j] = niz[j + k];
			n -= k;
			i = 0;
		}
		else
			i++;
	}
	for (i = 0; i < n; i++)
		printf("%d ", niz[i]);
	return 0;
}
