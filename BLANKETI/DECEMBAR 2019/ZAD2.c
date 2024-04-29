#include<stdio.h>
void main()
{
	int A[100], N, i, j, pola, pom;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	pola = N / 2;
	for (i = 0; i < pola - 1; i++)
		for (j = i + 1; j < pola; j++)
			if (A[i] > A[j])
			{
				pom = A[i];
				A[i] = A[j];
				A[j] = pom;
			}
	for (i = pola; i < N - 1; i++)
		for (j = i + 1; j < N; j++)
			if (A[i] < A[j])
			{
				pom = A[i];
				A[i] = A[j];
				A[j] = pom;
			}
	printf("Niz nakon uredjenja:\n");
	for (i = 0; i < N; i++)
		printf("%d ", A[i]);
	printf("\n\n");
	printf("Najmanji element je: %d\n", A[0] < A[N - 1] ? A[0] : A[N - 1]);
	printf("Najveci element je: %d\n", A[pola - 1] > A[pola] ? A[pola - 1] : A[pola]);
}
