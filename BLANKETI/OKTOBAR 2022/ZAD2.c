#include <stdio.h>
void main()
{
	int N, A[30], X, Y, i, ix = -1, iy = -1;
	float S = 0;
	printf("Unesite broj elemenata niza:\n");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < N; i++)
		S += A[i];
	S /= N;
	for (i = 0; i < N; i++)
	{
		if (A[i] < S && (ix == -1 || A[i] > A[ix]))
			ix = i;
		else if (A[i] > S && (iy == -1 || A[i] < A[iy]))
			iy = i;
	}
	X = A[ix];
	Y = A[iy];
	A[ix] = Y;
	A[iy] = X;
	printf("S=%f X=%d Y=%d\n", S, X, Y);
	printf("Niz nakon transformacije:\n");
	for (i = 0; i < N; i++)
		printf("%d ", A[i]);
}
