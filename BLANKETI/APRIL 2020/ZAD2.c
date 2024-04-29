#include <stdio.h>
void main()
{
	int A[100], B[100], n, k, m = 0, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < n; i++)
	{
		k = 0;
		for (j = 0; j < n; j++)
			if (A[i] == A[j])
				k++;
		if (k == 1)
		{
			B[m] = A[i];
			m++;
		}
	}
	for (i = 0; i < m; i++)
		printf("%d ", B[i]);
}
