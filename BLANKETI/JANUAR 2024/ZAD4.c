#include <stdio.h>
int main() {
	int dim, suma, broj_ucitanih, kontra, i, j, broj;
	float mat[100][100];
	suma = 0;
	broj_ucitanih = 0;
	kontra = 0;
	broj = 0;
	scanf("%d", &dim);
	FILE* fajl = fopen("ulaz.txt", "r");
	for (i = 0; i < dim; i++)
	{
		for (j = 0; j < dim; j++)
		{
			fscanf(fajl, "%d", &broj);
			suma += broj;
			broj_ucitanih++;
			if (!kontra)
			{
				mat[i][j] = (float)suma / broj_ucitanih;; // redja na desno
			}
			else
			{
				mat[i][dim - j - 1] = (float)suma / broj_ucitanih; // redja na levo
			}
		}
		if (kontra == 0) kontra = 1; else kontra = 0; // toggle kontra
	}
	fclose(fajl);
	for (i = 0; i < dim; i++)
	{
		for (j = 0; j < dim; j++) printf("%f\t", mat[i][j]);
		printf("\n");
	}
	fclose(fajl);
	return 0;
}
