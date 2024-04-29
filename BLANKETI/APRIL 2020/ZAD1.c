#include <stdio.h>
void main()
{
	int S, P, br;
	printf("Unesite gornju granicu sume:\n");
	scanf("%d", &P);
	S = 0;
	while (S <= P)
	{
		scanf("%d", &br);
		printf("Unet je broj %d\n", br);
		while (br > 0)
		{
			if ((br % 10) % 2 == 0)
				S += br % 10;
			br /= 10;
		}
	}
	printf("Za P=%d suma parnih cifara uneti brojeva je % d\n", P, S);
}
