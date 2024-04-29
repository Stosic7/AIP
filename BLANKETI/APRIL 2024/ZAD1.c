#include <stdio.h>
void main()
{
	int s = -1, sPret, x, xCopy, c, maxSuma = -1, maxSBroj;
	do
	{
		sPret = s;
		scanf("%d", &x);
		s = 0;
		xCopy = x;
		while (xCopy != 0)
		{
			c = xCopy % 10;
			xCopy /= 10;
			s += c;
		}
		if (s > maxSuma)
		{
			maxSuma = s;
			maxSBroj = x;
		}
	} while (sPret != s);
	printf("%d", maxSBroj);
}
