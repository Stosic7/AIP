#include <stdio.h>
void main()
{
	FILE* f;
	int N, A[100][100], suma_glavne = 0, suma_sporedne = 0, i, j;
	f = fopen("ulaz.txt", "r");
	fscanf(f, "%d", &N);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			fscanf(f, "%d", &A[i][j]);
			if (i > j)
				suma_glavne += A[i][j];
			if (i + j > N - 1)
				suma_sporedne += A[i][j];
		}
	}
	fclose(f);
	if (suma_glavne > suma_sporedne)
		printf("Suma ispod glavne dijagonale je veca od sume ispod sporedne dijagonale.\n");
	else if (suma_glavne < suma_sporedne)
		printf("Suma ispod sporedne dijagonale je veca od sume ispod glavne dijagonale.\n");
	else
		printf("Suma ispod glavne dijagonale je jednaka sumi ispod sporedne dijagonale.\n");
}
