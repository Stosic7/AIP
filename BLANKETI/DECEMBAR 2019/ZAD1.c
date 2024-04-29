#include <stdio.h>
void main()
{
	int maxSuma, br, suma, brojCifara = 0;
	printf("Unesite maskimalnu sumu cifara \n");
	scanf("%d", &maxSuma);
	do
	{
		printf("Unesite n-tocifrani broj \n");
		scanf("%d", &br);
		suma = 0;
		while (br > 0)
		{
			suma += br % 10;
			br = br / 10;
			brojCifara++;
		}
	} while (suma < maxSuma);
	printf("Ukupan broj cifara unetih brojeva je %d", brojCifara);
}
