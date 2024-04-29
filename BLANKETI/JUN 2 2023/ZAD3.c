#include <stdio.h>
#include <string.h>
double toReal(char* s)
{
	double broj = 0, d = 0.1;
	int i = 0;
	while (s[i] != '\0' && s[i] != '.' && s[i] != ',')
	{
		broj = broj * 10 + s[i] - '0';
		i++;
	}
	if (s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		broj += (s[i] - '0') * d;
		d *= 0.1;
		i++;
	}
	return broj;
}
