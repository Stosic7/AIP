#include <stdio.h>
int prosti(int niz[], int dim)
{
	int i, brojProstih;
	brojProstih = 0;
	for (i = 0; i < dim; i++)
	{
		if (niz[i] == 1 ||
			niz[i] == 2 ||
			niz[i] == 3 ||
			niz[i] == 5 ||
			niz[i] == 7) brojProstih++;
	}
	return brojProstih;
}
int main() {
	int mat[50][50], novaMat[50][50], pom[50], dim, i, j, k, brPr;
	printf("Unesi dimenziju kvadratne matrice: ");
	scanf("%d", &dim);
	printf("\n");
	for (i = 0; i < dim; i++) /* redovi */
		for (j = 0; j < dim; j++) /* kolone */
		{
			printf("Unesi element matrice na poziciji %d, %d: ", i + 1, j + 1);
			scanf("%d", &mat[i][j]);
		}
	for (i = 0; i < dim; i++)
		for (j = 0; j < dim; j++)
			if (i != j) /* ako element nije na glavnoj dijagonali */
				novaMat[i][j] = 0;
			else /* inace, ako jeste na glavnoj dijagonali */
			{
				brPr = 0; /* u brPr cuvamo broj prostih na datoj poziciji */
				/* prvo ga anuliramo pa nadodajemo na njega */
				/* prvo u datom redu matrice, pa onda u datoj */
				/* koloni matrice (nadodamo na brPr) */
				for (k = 0; k < dim; k++)
					pom[k] = mat[i][k]; /* i-ti red u pomocni niz */
				brPr += prosti(pom, dim); /* saljemo taj pomocni niz u f-ju */
				for (k = 0; k < dim; k++)
					pom[k] = mat[k][j]; /* j-ta kolona u pomocni niz */
				brPr += prosti(pom, dim); /* (nadodaje se na zbir u brPr */
				novaMat[i][j] = brPr;
				/* element (i,j) u preseku date vrste i kolone */
				/* ako je prost - bice pobrojan dva puta */
				/* tražio se broj prostih u datom redu i koloni */
				/* a taj element pripada istovremeno i redu i koloni */
				/* zato se racuna dvaput, osim ako se ne naglasi suprotno */
			}
		/* ispis formirane matrice */
		for (i = 0; i < dim; i++)
		{
			for (j = 0; j < dim; j++)
				printf("%d\t", novaMat[i][j]); /* ispise red matrice */
			/* razdvoji tabovima */
			printf("\n"); /* pa onda predje u novi red */
		}
}
