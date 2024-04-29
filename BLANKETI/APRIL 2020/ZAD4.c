#include <stdio.h>
int main()
{

	//
	// Init
	//

	FILE* fm;
	fm = fopen("matrica.txt", "r");
	int dim, matrica[30][30];
	int i, j;

	fscanf(fm, "%d", &dim);
	for (i = 0; i < dim; i++)
		for (j = 0; j < dim; j++)
			fscanf(fm, "%d", &matrica[i][j]);

	int put_i[30], put_j[30], duzina_puta, smer, postoji_dalje;
	int tren_i, tren_j;

	duzina_puta = 1;
	fscanf(fm, "%d", &put_i[0]);
	fscanf(fm, "%d", &put_j[0]);
	postoji_dalje = 1;
	tren_i = put_i[0];
	tren_j = put_j[0];
	fclose(fm);


	printf("%d\n", dim);
	for (i = 0; i < dim; i++) {
		for (j = 0; j < dim; j++)
			printf("%d ", matrica[i][j]);
		printf("\n");
	}

	//
	// Main logic
	//

	// PRVI NAREDNI
	postoji_dalje = 0;
	if (tren_i - 1 >= 0 && matrica[tren_i - 1][tren_j] == 1 && duzina_puta == 1) {
		postoji_dalje = 1;
		put_i[duzina_puta] = tren_i - 1;
		put_j[duzina_puta] = tren_j;
		tren_i = put_i[duzina_puta];
		tren_j = put_j[duzina_puta];
		duzina_puta = duzina_puta + 1;
		printf("Gore, ");
	}
	if (tren_i + 1 < dim && matrica[tren_i + 1][tren_j] == 1 && duzina_puta == 1) {
		postoji_dalje = 1;
		put_i[duzina_puta] = tren_i + 1;
		put_j[duzina_puta] = tren_j;
		tren_i = put_i[duzina_puta];
		tren_j = put_j[duzina_puta];
		duzina_puta = duzina_puta + 1;
		printf("Dole, ");
	}
	if (tren_j - 1 >= 0 && matrica[tren_i][tren_j - 1] == 1 && duzina_puta == 1) {
		postoji_dalje = 1;
		put_i[duzina_puta] = tren_i;
		put_j[duzina_puta] = tren_j - 1;
		tren_i = put_i[duzina_puta];
		tren_j = put_j[duzina_puta];
		duzina_puta = duzina_puta + 1;
		printf("Levo, ");
	}
	if (tren_j + 1 < dim && matrica[tren_i][tren_j + 1] == 1 && duzina_puta == 1) {
		postoji_dalje = 1;
		put_i[duzina_puta] = tren_i;
		put_j[duzina_puta] = tren_j + 1;
		tren_i = put_i[duzina_puta];
		tren_j = put_j[duzina_puta];
		duzina_puta = duzina_puta + 1;
		printf("Desno, ");
	}

	// OSTALI NAREDNI
	while (postoji_dalje) {
		postoji_dalje = 0;

		if (tren_i - 1 >= 0 && matrica[tren_i - 1][tren_j] == 1 \
			&& !(put_i[duzina_puta - 2] == tren_i - 1 && put_j[duzina_puta - 2] == tren_j)) {
			//GORE
			postoji_dalje = 1;
			put_i[duzina_puta] = tren_i - 1;
			put_j[duzina_puta] = tren_j;
			tren_i = put_i[duzina_puta];
			tren_j = put_j[duzina_puta];
			duzina_puta = duzina_puta + 1;
			printf("Gore, ");
		}
		if (tren_i + 1 < dim && matrica[tren_i + 1][tren_j] == 1 \
			&& !(put_i[duzina_puta - 2] == tren_i + 1 && put_j[duzina_puta - 2] == tren_j)) {
			//DOLE
			postoji_dalje = 1;
			put_i[duzina_puta] = tren_i + 1;
			put_j[duzina_puta] = tren_j;
			tren_i = put_i[duzina_puta];
			tren_j = put_j[duzina_puta];
			duzina_puta = duzina_puta + 1;
			printf("Dole, ");
		}
		if (tren_j - 1 >= 0 && matrica[tren_i][tren_j - 1] == 1 \
			&& !(put_i[duzina_puta - 2] == tren_i && put_j[duzina_puta - 2] == tren_j - 1)) {
			//LEVO
			postoji_dalje = 1;
			put_i[duzina_puta] = tren_i;
			put_j[duzina_puta] = tren_j - 1;
			tren_i = put_i[duzina_puta];
			tren_j = put_j[duzina_puta];
			duzina_puta = duzina_puta + 1;
			printf("Levo, ");
		}
		if (tren_j + 1 < dim && matrica[tren_i][tren_j + 1] == 1 \
			&& !(put_i[duzina_puta - 2] == tren_i && put_j[duzina_puta - 2] == tren_j + 1)) {
			//DESNO
			postoji_dalje = 1;
			put_i[duzina_puta] = tren_i;
			put_j[duzina_puta] = tren_j + 1;
			tren_i = put_i[duzina_puta];
			tren_j = put_j[duzina_puta];
			duzina_puta = duzina_puta + 1;
			printf("Desno, ");
		}
	}

	printf("KRAJ \n");

	printf("PUT %d:\n", duzina_puta);
	for (i = 0; i < duzina_puta; i++) {
		printf("%d, %d\n", put_i[i], put_j[i]);
	}

	return 0;
}
