#include <stdio.h>
void main()
{
	int M, c, br, s, s2 = 0, br2;
	printf("Unesite M:\n");
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		printf("Unesite broj:\n");
		scanf("%d", &br);
		br2 = br;
		s = 0;
		while (br > 0) {
			c = br % 10;
			s = s + c;
			br = br / 10;
		}
		if (br2 % s == 0)
			printf("Deljiv broj: %d\n", br2);
		else
			s2 += br2;
	}
	printf("Suma nedeljivih brojeva: %d\n", s2);
}
