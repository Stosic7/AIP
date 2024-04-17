#include <stdio.h>
void main()
{
	int broj, brojCpy, A = 0, B = 0, zbir1, zbir2, c;
	do
	{
		printf("Unesite prirodni broj: ");
		scanf("%d", &broj);
		brojCpy = broj;
		zbir1 = brojCpy % 10;
		zbir2 = 0;
		brojCpy /= 10;
		while (brojCpy > 0)
		{
			c = brojCpy % 10;
			if (brojCpy < 10)
				zbir1 += c;
			else
				zbir2 += c;
			brojCpy /= 10;
		}
		if (zbir1 > zbir2)
			A += broj;
		else if (zbir1 < zbir2)
			B += broj;
	} while (zbir1 != zbir2);
	printf("Suma A=%d, suma B=%d\n", A, B);
}
