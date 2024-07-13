#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	int n, i = 2, p;
	i = 2;
	scanf("%d", &n);
	p = (int)floor(sqrt(n));
	while (i <= p && (n % i) != 0)
		i++;
	if (n < 3 || n % i != 0)
	{
		p = 1;
		while (n > 0)
		{
			p *= n % 10;
			n = n / 10;
		}
		printf("%d\n", p);
	}
	else
	{
		p = 0;
		while (n > 0)
		{
			p += n % 10;
			n = n / 10;
		}
		printf("%d\n", p);
	}
}
