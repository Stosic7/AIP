#include <stdio.h>
void main()
{
	float x, y;
	int a, b, c, n, i;
	a = b = c = i = 0;
	scanf("%d", &n);
	while (i < n)
	{
		scanf("%f %f", &x, &y);
		if ((x - 2) * (x - 2) + (y - 2) * (y - 2) <= 1 && x < 2)
		{
			printf("A\n");
			a++;
		}
		else
			if (x >= 2 && x <= 6 && y >= 1 && y <= 3)
			{
				printf("B\n");
				b++;
			}
			else
				if ((x - 6) * (x - 6) + (y - 2) * (y - 2) <= 1 && x > 6)
				{
					printf("C\n");
					c++;
				}
		i++;
	}
	printf("Broj tacaka po oblastima: A=%d, B=%d, C=%d", a, b, c);
}
