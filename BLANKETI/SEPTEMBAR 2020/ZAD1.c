#include<stdio.h>
void main()
{
	int N, i, br, br_copy, cif, sum;
	int min_broj, min_suma;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &br);
		br_copy = br;
		sum = 0;
		if (i == 0)
		{
			min_broj = br_copy;
			min_suma = br_copy;
		}
		while (br != 0)
		{
			cif = br % 10;
			if (cif % 2 == 0)
				sum += cif;
			br = br / 10;
		}
		if (sum < min_suma)
		{
			min_suma = sum;
			min_broj = br_copy;
		}
	}
	printf("Trazeni broj je: %d", min_broj);
}
