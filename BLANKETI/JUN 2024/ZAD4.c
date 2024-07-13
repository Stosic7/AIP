#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct Tacka
{
	float X;
	float Y;
} Tacka;
float Rastojanje(Tacka a, Tacka b)
{
	return sqrtf(pow(a.X - b.X, 2) + pow(a.Y - b.Y, 2));
}
float Obim(Tacka temena[], int n)
{
	int i = 0;
	float o = Rastojanje(temena[0], temena[n - 1]);
	for (i = 1; i < n; i++)
		o += Rastojanje(temena[i - 1], temena[i]);
	return o;
}
float pTrougla(float a, float b, float c)
{
	float s;
	s = (a + b + c) / 2.0f;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
float Povrsina(Tacka temena[], int n)
{
	int i;
	float a, b, c, P = 0.0f;
	a = Rastojanje(temena[0], temena[1]);
	for (i = 2; i < n; i++)
	{
		b = Rastojanje(temena[i - 1], temena[i]);
		c = Rastojanje(temena[0], temena[i]);
		P += pTrougla(a, b, c);
		a = c;
	}
	return P;
}
int main()
{
	Tacka* temena;
	int n;
	int i;

	scanf("%d", &n);
	temena = (Tacka*)malloc(n * sizeof(Tacka));
	for (i = 0; i < n; i++)
		scanf("%f%f", &temena[i].X, &temena[i].Y);
	printf("%.2f\n", Obim(temena, n));
	printf("%.2f\n", Povrsina(temena, n));
	free(temena);
}
