void main()
{
	int A[30], B[30], C[30], i, indA = 0, indB = 0, indC = 0, N, M, krajA = 0, krajB = 0;
	printf("Unesite vrednosti N i M\n");
	scanf("%d%d", &N, &M);
	printf("Unesite elemente niza A:\n");
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	printf("Unesite elemente niza B:\n");
	for (i = 0; i < M; i++)
		scanf("%d", &B[i]);
	while (!krajA && !krajB)
	{
		if (A[indA] < B[indB])
		{
			C[indC] = A[indA];
			if (indA < N - 1)
				indA++;
			else
				krajA = 1;
		}
		else
		{
			C[indC] = B[indB];
			if (indB < M - 1)
				indB++;
			else
				krajB = 1;
		}
		indC++;
	}
	if (krajA)
		for (i = indC; i < N + M; i++)
		{
			C[i] = B[indB];
			indB++;
		}
	else
		for (i = indC; i < N + M; i++)
		{
			C[i] = A[indA];
			indA++;
		}
	printf("Elementi niza C su:\n");
	for (i = 0; i < N + M; i++)
		printf("%d ", C[i]);
}
