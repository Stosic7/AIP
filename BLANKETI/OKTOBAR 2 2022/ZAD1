#include <stdio.h>
void main()
{
	int K, R = 0, x, y, sumaCif;
	printf("Unesite broj K:\n");
	scanf("%d", &K);
	while (R < K)
	{
		scanf("%d", &x);
		sumaCif = 0;
		y = x;
		while (y > 0)
		{
			sumaCif += y % 10;
			y /= 10;
		}
		if (sumaCif % 2 == 0)
			R += x;
		else
			R -= x;
		printf("R=%d\n", R);
	}
}
