#include <stdio.h>
main()
{
	int b = 0, n = 0, s = 1;
	char c = '0';
	while (c != -2)
	{
		c = getchar();
		if (c == 'x' || c == 'X')
			c = -2;
		else
			if (c >= '0' && c <= '9')
				c = c - '0';
			else
				if (c >= 'a' && c <= 'f')
					c = c - 'a' + 10;
				else
					if (c >= 'A' && c <= 'F')
						c = c - 'A' + 10;
					else
						c = -1;
		if (c > -1)
		{
			b = c * s + b;
			s = s * 16;
			n++;
		}
	}
	printf("\n%d\n", b);
	system("pause");
}
