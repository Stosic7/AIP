#include<stdio.h>
#include<math.h>
void main()
{
	int brojA = 0, brojB = 0, brojC = 0;
	float x, y;
	int pripada = 1;
	int rBr = 1;
	while (pripada)
	{
		printf("Unesite x i y:\n");
		scanf("%f%f", &x, &y);
		if (pow(x - 3.0, 2) + pow(y - 3.0, 2) <= 1)
		{
			brojA++;
			printf("Tacka broj %d. je sa koordinatama (%f, %f) i pripada oblasti A.\n", rBr, x, y);
		}
		else if (y >= 4 && x >= 4 && y <= 9 - x)
		{
			brojB++;
			printf("Tacka broj %d. je sa koordinatama (%f, %f) i pripada oblasti B.\n", rBr, x, y);
		}
		else if (x >= 1 && y >= 1 && x <= 5 && y <= 5 && y <= 9 - x)
		{
			brojC++;
			printf("Tacka broj %d. je sa koordinatama (%f, %f) i pripada oblasti C.\n", rBr, x, y);
		}
		else
		{
			pripada = 0;
		}
		rBr++;
	}
	printf("Broj tacaka u A = %d, B = %d, C = %d.", brojA, brojB, brojC);
}
