#include <stdio.h>
#include <string.h>
void main()
{
	FILE* F;
	char recenica[70];
	int i = 0, pocReci = 0, krajReci, duzReci, maxDuzReci = 0, pocMaxReci = 0;
	F = fopen("nadja.txt", "r");
	fgets(recenica, 70, F);
	while (i < strlen(recenica))
	{
		pocReci = i;
		while (recenica[i] != ' ' && i < strlen(recenica))
			i++;
		krajReci = i - 1;
		duzReci = krajReci - pocReci + 1;
		if (duzReci > maxDuzReci)
		{
			maxDuzReci = duzReci;
			pocMaxReci = pocReci;
		}
		i++;
	}
	maxDuzReci++;
	for (i = pocMaxReci; i <= strlen(recenica) - maxDuzReci - 1; i++)
		recenica[i] = recenica[i + maxDuzReci];
	for (i = 0; i < strlen(recenica) - maxDuzReci; i++)
		printf("%c", recenica[i]);
	fclose(F);
}
