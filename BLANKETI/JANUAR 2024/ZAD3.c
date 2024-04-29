#include <stdio.h>
#include <string.h>
#include <math.h>
int zamenaUzastopnihSlova(char* s)
{
	int i = 0, j, n, m, k, izvrsenaZamena = 0;
	n = strlen(s);
	while (i < n - 1)
	{
		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
		{
			j = i + 1;
			while ((s[i] == s[j] || abs(s[i] - s[j]) == abs('A' - 'a')) && j < n)
			{
				j++;
			}
			if (j != i + 1)
			{
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] += 'A' - 'a';
				m = j - i - 1;
				for (k = j; k <= n; k++)
					s[k - m] = s[k];
				izvrsenaZamena = 1;
				n -= m;
			}
		}
		i++;
	}
	return izvrsenaZamena;
}
void main()
{
	char s[80];
	int zamena;
	printf("Unesite zeljene recenice:\n");
	do
	{
		gets(s);
		zamena = zamenaUzastopnihSlova(s);
		printf("%s\n", s);
	} while (zamena);
}
